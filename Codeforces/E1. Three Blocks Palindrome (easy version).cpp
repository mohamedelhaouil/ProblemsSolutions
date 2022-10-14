/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define sq(s) ((s) * (s))
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define forn(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
const int mxn = 1e5 + 5;
int x[mxn];
void solve() {
	int n, ans = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		--a[i];
	}
	vector<vector<int> > pref(26, vector<int>(n + 1));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 26; j++) {
			pref[j][i + 1] = pref[j][i];
		}
		++pref[a[i]][i + 1];
	}
	for(int i = 0; i < 26; i++) {
		ans = max(ans, pref[i][n]);
	}
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			int in = 0, out = 0;
			for(int k = 0; k < 26; k++) {
				in = max(in, pref[k][j + 1] - pref[k][i]);
				out = max(out, min(pref[k][i], pref[k][n] - pref[k][j + 1]) * 2);
			}
			ans = max(ans, out + in);
		}
	}
	cout << ans << endl;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}


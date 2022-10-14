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


using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
const int mxn = 1e5 + 5;
int a[mxn];
void solve() {
	int n, x;
	cin >> n >> x;
	int cnt = -1, pref1 = 0, pref2 = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] % x) cnt = 1;
	}
	for(int i = 0; i < n; i++) {
		pref1 = pref1 + a[i];
		pref2 = pref2 + a[n - 1 - i];
		if(pref1 % x) cnt = max(cnt, i + 1);
		if(pref2 % x) {
			cnt = max(cnt, i + 1);
		}
	}
	cout << cnt << endl;
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


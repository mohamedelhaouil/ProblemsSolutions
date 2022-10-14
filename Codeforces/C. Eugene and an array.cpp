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
const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
const int mxn = 2e5 + 5;
int x[mxn];
void solve() {
	int n;
	cin >> n;
	ll ans = 0;
	vector<ll> pref(n + 1, 0);
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		pref[i + 1] = pref[i] + a;
	}
	set<ll> s;
	s.insert(0);
	int start = 0, end = 0;
	while(start < n) {
		while(end < n && !s.count(pref[end + 1])) {
			++end;
			s.insert(pref[end]);
		}
		ans += end - start;
        	s.erase(pref[start]);
        	++start;
	}
	cout << ans << endl;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


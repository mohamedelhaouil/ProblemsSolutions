/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define mp make_pair
#define pb push_back
#define EPS (1E-9)
#define INF ((int)1E9)
#define sq(s) ((s) * (s))
using namespace std;

typedef long long ll;
void solve() {
	ll n, g, b, h;
	cin >> n >> g >> b;
	h = (n + 1) / 2;
	if(g >= h) {
		cout << n << endl;
		return;
	}
	ll mo = h % g;
	ll m = h / g;
	ll ans = m * (g + b);
	mo == 0 ? ans -= b : ans += mo;
	if(ans < n) {
		ans = n;
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


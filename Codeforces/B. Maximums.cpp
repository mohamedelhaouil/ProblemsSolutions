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
const int mxn = 2e5 + 4;
ll x[mxn];
void solve() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x[i];
	}
	cout << x[0];
	ll mx = x[0];
	for(int i = 1; i < n; i++ ) {
		mx = max(mx, x[i - 1]);
		x[i] += mx;
		cout << " " << x[i];
	}
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


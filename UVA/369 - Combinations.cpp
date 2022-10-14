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
int n, m;
int x[101];
void solve() {
	ull ans = 1;
	int r = n - m;
	for(int i = 1; i <= r; i++) {
		x[i] = i;
	}
	for(int i = n; i > m; i--) {
		ans *= i;
		for(int j = 2; j <= r; j++) {
			if(x[j] && ans % x[j] == 0) {
				ans /= j;
				x[j] = 0;
			}
		}
	}
	cout << n << " things taken " << m << " at a time is " << ans << " exactly." <<endl;
	//100 things taken 6 at a time is 1192052400 exactly.

}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
	while(cin >> n >> m && n && m) {
		solve();
	}
	return 0;
}


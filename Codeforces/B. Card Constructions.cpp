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
int x[mxn];
void solve() {
	int n;
	cin >> n;
	int ans = 0, cnt = 0;
	while(n >= 2) {
		ans = 0;
		for(int i = 1;ans <= n;i++) {
			ans += 3 * i;
			if(n - ans < 3 * (i + 1)) {
				if(n - ans < 2 * (i + 1)) {
					ans -= i;
					break;
				}
				else {
					ans += 2 * (i + 1);
					break;
				}
			}
		}
		cnt++;
		n -= ans;
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


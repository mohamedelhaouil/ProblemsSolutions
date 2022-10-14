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
const int mxn = 1e6 + 5;
void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> v(n + 1, 0);
	for(int i = 0; i < m; i++) {
		int a; cin >> a;
		v[a] = 1;
	}
	bool bl = false;
	int ans = 1, prev = 1;
	if(v[1] == 1) {
		bl = true;
		ans = 1;
	}
	for(int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		if(prev == x || prev == y) {
			prev = x + y - prev;
		}
		else {
			continue;
		}
		if(bl) {
			continue;
		}
		if(v[prev] == 1) {
			ans = prev;
			bl = true;
		}
		else {
			ans = prev;
		}
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


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
const int mxn = 2e5 + 5;
int x[mxn];
void solve() {
	int n, mx = -1;
	cin >> n;
	set<int> s;
	memset(x, 0, sizeof(x));
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		x[a]++;
		mx = max(mx, x[a]);
		s.insert(a);
	}
	int ans;
	if(mx > sz(s)) {
		ans = min(sz(s), mx);
	}
	else ans = min(sz(s) - 1, mx);
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


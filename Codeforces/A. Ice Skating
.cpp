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
const int mxn = 1e2 + 5;
int x[mxn], y[mxn];
int vis[mxn] = {0};
int n;
void dfs(int node) {
	if(vis[node]) {
		return;
	}
	vis[node] = 1;
	for(int i = 0; i < n; i++) {
		if(x[i] == x[node] || y[i] == y[node]) {
			dfs(i);
		}
	}
}
void solve() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if(!vis[i]) {
			ans++;
			dfs(i);
		}
	}
	cout << ans - 1 << endl;
}
int main () {
	using namespace std;
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


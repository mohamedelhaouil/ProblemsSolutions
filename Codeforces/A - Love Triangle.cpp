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
vector<vector<int> > adj;
int vis[mxn] = {0};
int cnt;
void dfs(int node) {
	if(vis[node]) {
		return;
	}
	vis[node] = 1;
	cnt++;
	for(int i = 0; i < sz(adj[node]); i++) {
		int child = adj[node][i];
		if(!vis[child]) {
			dfs(child);
		}
	}
}
void solve() {
	int n;
	cin >> n;
	adj = vector<vector<int> >(n);
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		--x;
		adj[i].pb(x);
	}
	for(int i = 0; i < n; i++) {
		cnt = 0;
		if(!vis[i]) {
			dfs(i);
		}
		memset(vis, 0, sizeof(vis));
		if(cnt == 3) {
			cnt = 0;
			memset(vis, 0, sizeof(vis));
			dfs(adj[i][0]);
			if(cnt == 3) {
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
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


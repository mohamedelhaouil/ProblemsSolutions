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
int n, m;
vector<vector<int> > adj;
vector<int> top;
vector<bool> vis;
void dfs(int node) {
	if(vis[node]) return;
	vis[node] = 1;
	for(int i = 0; i < sz(adj[node]); i++) {
		int child = adj[node][i];
		if(!vis[child])
			dfs(child);
	}
	top.pb(node);
}
void solve() {
	adj.resize(n + 1);
	vis.resize(n + 1);
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].pb(b);
	}
	for(int i = 1; i <= n; i++) {
		if(!vis[i])
			dfs(i);
	}
	for(int i = n - 1; i >= 0; i--) {
		cout << top[i] << " \n"[i == 0];
	}
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
	while(cin >> n >> m && n) {
		adj.clear();
		vis.clear();
		top.clear();
		solve();
	}
	return 0;
}


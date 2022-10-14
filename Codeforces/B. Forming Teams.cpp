/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

int cnt, mn;
vector<vector<int> > adj;
vector<bool> vis;

void dfs(int node) {
	vis[node] = true;
	cnt++;
	mn = min(mn, (int)adj[node].size());
	for(int i = 0; i < (int)adj[node].size(); ++i) {
		int child = adj[node][i];
		if(!vis[child])
			dfs(child);
	}
}

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	adj = vector<vector<int> >(n);
	for (int i = 0; i < m; ++i) {
		int x ,y;
		cin >> x >> y;
		--x, --y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int rmv = 0, odd = 0;
	vis = vector<bool>(n, 0); 
	for (int i = 0; i < n; i++) {
		if(vis[i]) continue;
		cnt = 0;
		mn = 2;
		dfs(i);
		if (mn == 2 && (cnt & 1)) 
			rmv++;
		else {
			if(cnt & 1) 
				odd++;
		}	
	}
	if (odd & 1) 
		rmv++;
	cout << rmv << endl;
	return 0;
}


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
int n, cnt = 1;
char grid[104][104];
bool vis[104][104];
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1}; 
bool valid(int i, int j) {
	return i >= 0 && j >= 0 && i < n && j < n;
}
void dfs(int x, int y) {
	if(vis[x][y] || !valid(x, y) || grid[x][y] == '.') return;
	vis[x][y] = 1;
	for(int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		dfs(xx, yy);
	}
}
void solve() {
	int ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		scanf("\n");
		for(int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}
	memset(vis, 0, sizeof(vis));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(!vis[i][j] && grid[i][j] == 'x'){
				ans++;
				dfs(i,j);
			}
		}
	}
	cout << "Case " << cnt++ << ": " << ans << endl;
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


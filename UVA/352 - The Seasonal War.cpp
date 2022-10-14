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
char pix[30][30];
bool vis[30][30];
int n;
bool valid(int i,int j) {
	return i >= 0 && j >= 0 && i < n && j < n;
}
int dx[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[8] = {1, -1, 0, 0, 1, -1, -1, 1};
void dfs(int i, int j) {
	if(vis[i][j]) return;
	vis[i][j] = 1;
	for(int k = 0; k < 8; k++) {
		int x = dx[k] + i;
		int y = dy[k] + j;
		if(valid(x, y) && !vis[x][y] && pix[x][y] == '1')
			dfs(x, y);
	}
}

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int cnt = 1;
	while(scanf("%d", &n) && n) {
		int ans = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> pix[i][j];
			}
		}
		memset(vis, 0, sizeof(vis));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(!vis[i][j] && pix[i][j] == '1') {
					dfs(i, j);
					++ans;
				}
			}	
		}
		cout << "Image number " << cnt++ <<" contains " << ans <<" war eagles." << endl;
	}
	return 0;
}

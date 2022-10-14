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
char path[10][10];
int n, m;
int dx[3] = {-1, 0, 0};
int dy[3] = {0, 1, -1};
string sd[3] = {"forth", "right", "left"}, sp = "IEHOVA#";
vector<string > ans;
bool valid(int i, int j) {
	return i >= 0 && j >= 0 && i < n && j < m;
}
void dfs(int x, int y, int id) {
	if(id > sz(sp) || !valid(x, y)) return;
	for(int i = 0; i < 3; i++) {
		int xx = dx[i] + x;
		int yy = dy[i] + y;
		if(valid(xx, yy) && sp[id] == path[xx][yy]) {
			ans.pb(sd[i]);
			dfs(xx, yy, id + 1);
		}
	}
}
void solve() {
	int x, y;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> path[i][j];
			if(path[i][j] == '@') {
				x = i; y = j;
			}
		}
	}
	ans.clear();
	dfs(x, y, 0);
	for(int i = 0; i < sz(ans); i++) {
		cout << ans[i] << (i == sz(ans) - 1 ? '\n' : ' ');
		cout.flush();
	}
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

/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>


using namespace std;


string x[105], path;
int n, m, s, ans;
bool valid(int i, int j) {
	return i >= 0 && j >= 0 && i < n && j < m;
}
void dfs(int i, int j, int id, pair<int, int> next) {
	if(id >= s) {
		return;
	}
	if(path[id] == 'F') {
		if(valid(i + next.first, j + next.second) && x[i + next.first][j + next.second] != '#') {
			if(x[i + next.first][j + next.second] == '*') ++ans;
			x[i + next.first][j + next.second] = '.';
			dfs(i + next.first, j + next.second, ++id, next);
		}
		else 
			dfs(i, j, ++id, next);
	}
	else if(path[id] == 'D') {
		if(next.first == 1 && next.second == 0) {
			dfs(i, j, ++id, {0, -1});
		}
		else if(next.first == -1 && next.second == 0) {
			dfs(i, j, ++id, {0, 1});
		}
		else if(next.first == 0 && next.second == 1) {
			dfs(i, j, ++id, {1, 0});
		}
		else {
			dfs(i, j, ++id, {-1, 0});
		}
	}
	else {
		if(next.first == 1 && next.second == 0) {
			dfs(i, j, ++id, {0, 1});
		}
		else if(next.first == -1 && next.second == 0) {
			dfs(i, j, ++id, {0, -1});
		}
		else if(next.first == 0 && next.second == 1) {
			dfs(i, j, ++id, {-1, 0});
		}
		else {
			dfs(i, j, ++id, {1, 0});
		}
	}
	
}
void solve() {
	for(int i = 0; i < n; i++) {
		cin >> x[i];
	}
	cin >> path;
	int pr, pc;
	char c;
	ans = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(x[i][j] != '.' && x[i][j] != '*' && x[i][j] != '#') {
				pr = i, pc = j;
				c = x[i][j];
				break;
			}
		}
	}
	pair<int, int> next;
	if(c == 'N') {
		next = {-1, 0};
	}
	if(c == 'S') {
		next = {1, 0};
	}
	if(c == 'O') {
		next = {0, -1};
	}
	if(c == 'L') {
		next = {0, 1};
	}
	dfs(pr, pc, 0, next);
	cout << ans << endl;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	while(cin >> n >> m >> s && n && m && s) {
		solve();
	}
	return 0;
}

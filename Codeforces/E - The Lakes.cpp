#include<bits/stdc++.h>
/*#include<unordered_map>
#include<unordered_set>*/

using namespace std;
void ios_b() {
	ios_base :: sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
void f() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
#define debug(x) cerr << (#x) << " = " << x << endl;
#define sz(x) (int)(x).size()
typedef long long ll;
typedef unsigned long long ull;
ll gcd(ll a, ll b) { return (!b) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a / gcd(a, b)) * b); }
const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9 + 7);
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
int n, m, cnt;
int vis[1000][1000];
vector<vector<int>> v;
bool val(int i, int j) {
	return i >= 0 && i < n && j >= 0 && j < m;
}
void dfs(int i, int j) {
	if(!val(i, j) || vis[i][j] || !v[i][j]) return;
	vis[i][j] = 1;
	cnt += v[i][j];
	for(int k = 0; k < 4; k++) {
		dfs(i + dx[k], j + dy[k]);
	}
}
void solve() {
	cin >> n >> m;
	v = vector<vector<int>>(n, vector<int>(m, 0));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	memset(vis, 0, sizeof(vis));
	int ans = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cnt = 0;
			if(!vis[i][j] && v[i][j]) {
				dfs(i, j);
				ans = max(ans, cnt);
			}
		}
	}
	cout << ans << endl;
}
int main () {
	ios_b();
	f();
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
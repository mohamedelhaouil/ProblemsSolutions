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
int n, m, test = 1;
void solve() {
	int id = 0;
	map<string, int> mp;
	vector<vector<int> > adj(30, vector<int>(30));
	vector<int> vis(30);
	vector<string> names(30);
	for(int i = 0; i < m; i++) {
		string s1, s2;
		cin >> s1;
		int a = mp[s1];
		if(!a) {
			mp[s1] = ++id;
			names[id] = s1;
			a = id;
		}
		cin >> s2;
		int b = mp[s2];
		if(!b) {
			mp[s2] = ++id;
			names[id] = s2;
			b = id;
		}
		adj[a][b] = 1;	
	}
	if(test > 1) cout << "\n";
	cout << "Calling circles for data set " << test++ << ":\n";
	for(int k = 1; k <= n; k++) {
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				if(i == j) adj[i][i] = 1;
				if(adj[i][k] == 1 && adj[k][j] == 1) {
					adj[i][j] = 1;
				}
			}
		}
	}
	for(int i = 1; i <= n; i++) {
		if(!vis[i]) {
			bool bl = false;
			for(int j = 1; j <= n; j++) {
				if(!vis[j] && adj[i][j] && adj[j][i]) {
					vis[i] = 1;
					vis[j] = 1;
					if(bl) cout << ", ";
					cout << names[j];
					bl = true;
				}
			}
			cout << "\n";
		}
	}
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	while(cin >> n >> m && n && m) {
		solve();
	}
	return 0;
}


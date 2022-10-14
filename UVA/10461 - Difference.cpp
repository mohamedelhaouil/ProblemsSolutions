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
int v, e;
vector<int> d;
vector<vector<int> > adj, adj1;
int mnBfs(int a) {
	int ans = 0;
	vector<int> l(v, INF);
	queue<pair<int, int> > q;
	q.push({a, 1});
	l[a] = 1;
	while(!q.empty()) {
		pair<int, int> p = q.front(); q.pop();
		int cur = p.first, dep = p.second;
		ans += d[cur];
		for(int i = 0; i < sz(adj[cur]); i++) {
			int child = adj[cur][i];
			if(l[child] == INF) {
				q.push({child, dep + 1});
				l[child] = dep + 1;
			}
		}
	}
	ans -= d[a];
	return ans;
}
int mxBfs(int a) {
	int ans = 0;
	vector<int> l(v, INF);
	vector<bool> vb(v, 1);
	queue<pair<int, int> > q;
	q.push({a, 1});
	l[a] = 1;
	vb[a] = 0;
	while(!q.empty()) {
		pair<int, int> p = q.front(); q.pop();
		int cur = p.first, dep = p.second;
		for(int i = 0; i < sz(adj1[cur]); i++) {
			int child = adj1[cur][i];
			if(l[child] == INF) {
				q.push({child, dep + 1});
				l[child] = dep + 1;
				vb[child] = 0;
			}
		}
	}
	for(int i = 0; i < v; i++) {
		if(vb[i]) ans += d[i];
	}
	return ans;
}
void solve() {
	d = vector<int>(v);
	adj = vector<vector<int> >(v);
	adj1 = vector<vector<int> >(v);
	for(int i = 0; i < v; i++) {
		cin >> d[i];
	}
	for(int i = 0; i < e; i++) {
		int x, y;
		cin >> x >> y;
		--x, --y;
		adj[x].pb(y);
		adj1[y].pb(x);
	}
	int q; cin >> q;
	for(int i = 0; i < q; i++) {
		int a; cin >> a;
		--a;
		int mn = mnBfs(a);
		int mx = mxBfs(a);
		cout << abs(mx - mn) << endl;
	}
}
int main () {
	using namespace std;
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
//	cin >> t;
	while(cin >> v >> e && v) {
		cout << "Case #" << t << ":" << endl;
		solve();
		cout << endl;
		t++;
	}
	return 0;
}


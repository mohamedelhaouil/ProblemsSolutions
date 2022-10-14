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
void solve() {
	int n, m;
	cin >> n >> m;
	vector<set<int> > v(n);
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		--a, --b;
		v[a].insert(b);
		v[b].insert(a);
	}
	int ans = 0;
	while(1) {
		int cnt = 0;
		vector<int> deg;
		for(int i = 0; i < n; i++) {
			if(sz(v[i]) == 1) deg.pb(i);
		}
		for(int i = 0; i < sz(deg); i++) {
			set<int>::iterator it = v[deg[i]].begin();
			v[*it].erase(deg[i]);
			v[i].clear();
			cnt++;
		}
		if(sz(deg)) ans++;
		else break;
	}
	cout << ans << endl;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


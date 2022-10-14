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
int mxn = 101;
int test = 1;
vector<vector<int> > adj;
void solve() {
	int ans = 0, n = 0;
	for(int k = 1; k < mxn; k++) {
		for(int i = 1; i < mxn; i++) {
			for(int j = 1; j < mxn; j++) {
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);	
			}
		}	
	}
	for(int i = 1; i < mxn; i++) {
		for(int j = 1; j < mxn; j++) {
			if(i == j || adj[i][j] >= INF) continue;
			ans += adj[i][j];
			n++;	
		}
	}
	printf("Case %d: average length between pages = %.3f clicks\n", test++, float(ans) / float(n));
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	while(cin >> a >> b && a && b) {
		adj = vector<vector<int> >(mxn, vector<int>(mxn, INF));
		adj[a][b] = 1;
		while(cin >> a >> b && a && b) {
			adj[a][b] = 1	;
		}
		solve();
	}
	return 0;
}

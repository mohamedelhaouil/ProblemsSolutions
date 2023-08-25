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
const int mxn = 1e3 + 5;
int x[mxn] = {0};
void solve() {
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		x[a] = 1; x[b] = 1;
	}
	int alpha = -1;
	for(int i = 1; i <= n; i++) {
		if(!x[i]) {
			alpha = i;
			break;
		}
	}
	cout << n - 1 << endl;
	for(int i = 1; i <= n; i++) {
		if(i == alpha) {
			continue;
		}
		cout << alpha << " " << i << endl;
	}
}
int main () {
	using namespace std;
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}
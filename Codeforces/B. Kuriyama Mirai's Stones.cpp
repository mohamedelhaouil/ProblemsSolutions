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
const int mxn = 1e5 + 6;
ll v[mxn], vs[mxn], ans1[mxn], ans2[mxn];
void solve() {
	int n, m;
	cin >> n;
	vs[0] = ans1[0] = ans2[0] = 0;
	for(int i = 1; i <= n; i++) {
		cin >> v[i];
		vs[i] = v[i];
	}
	sort(vs, vs + n + 1);
	for(int i = 1; i <= n; i++) {
		ans1[i] += (v[i] + ans1[i - 1]);
		ans2[i] += (vs[i] + ans2[i - 1]);
	}
	cin >> m;
	for(int i = 0; i < m; i++) {
		int type, l, r;
		cin >> type >> l >> r;
		if(type == 1) {
			cout << ans1[r] - ans1[l - 1] << endl;
		}
		else {
			cout << ans2[r] - ans2[l - 1] << endl;
		}
	}
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


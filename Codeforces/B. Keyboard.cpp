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
const int mxn = 32;
string a[mxn];
float exist[127] = {0.};
void solve() {
	int n, m;
	float x;
	cin >> n >> m >> x;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<pair<float, float> > vp;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(a[i][j] == 'S') {
				vp.pb({i, j});
			}
			else {
				exist[a[i][j]] = 1e9;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(a[i][j] == 'S') {
				continue;
			}
			else {
				float xx = i, yy = j, dist = 1e9 + 5;
				for(int k = 0; k < sz(vp); k++) {
					float x = vp[k].first, y = vp[k].second;
					dist = min(dist, sqrt(sq(xx - x) + sq (yy - y)));
				}
				exist[a[i][j]] = min(exist[a[i][j]], dist);
			}
		}
	}
	int q, ans = 0;
	string s;
	cin >> q >> s;
	for(int i = 0; i < q; i++) {
		if(s[i] > 96) {
			if(exist[s[i]]) {
				continue;
			}
			cout << -1 << endl;
			return;
		}
		s[i] += 32;
		if(!exist[s[i]] || vp.empty()) {
			cout << -1 << endl;
			return;
		}
		if(exist[s[i]] > x) ans++;
		
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


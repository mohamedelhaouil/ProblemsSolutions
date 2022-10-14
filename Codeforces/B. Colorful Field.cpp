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
const int mxn = 4e4 + 5;
void solve() {
	int n, m, k, t;
	cin >> n >> m >> k >> t;
	vector<vector<int> > v(n);
	map<pair<int, int> ,int> mp;
	for(int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		--a, --b;
		v[a].pb(b);
		mp[{a, b}]++;
	}
	for(int i = 0; i < n; i++) {
		sort(v[i].begin(), v[i].end());
	}
	for(int i = 0; i < t; i++) {
		int ii, jj;
		int ans = 0;
		cin >> ii >> jj;
		--ii, --jj;
		if(mp[{ii, jj}]) {
			cout << "Waste" << endl;
			continue;
		}
		bool bl = true;
		for(int j = 0; j <= ii; j++) {
			if(j == ii) {
				for(int k = 0; k < sz(v[j]); k++) {
					if(v[j][k] < jj) ans++;
					else {
						break;
					}
				}
			}
			else {
				ans += sz(v[j]);
			}
		}
		int mod = ii * m + jj - ans;
		if(mod % 3 == 0) {
			cout << "Carrots" << endl;
		}
		if(mod % 3 == 1) {
			cout << "Kiwis" << endl;
		}
		if(mod % 3 == 2) {
			cout << "Grapes" << endl;
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


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int mx = 55;
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n;
	vector<pair<ll, ll> > g;
	ll p[mx], ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	for(int i = 0; i < 5; i++) {
		int x; cin >> x;
		g.push_back(make_pair(x, 0));
	}
	for(int i = 0; i < n; i++) {
		ans += p[i];
		for(int j = 4; j >= 0; j--) {
			if(ans >= g[j].first) {
				ll y = ans / g[j].first;
				ans -= (y*g[j].first);
				g[j].second += y;	
			}
		} 
	}
	for (int i = 0; i < 5; i++) {
		cout << g[i].second << " ";
	}
	cout << endl << ans;
	return 0;
}


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
bool cmp(const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b) {
	return a.first.first > b.first.first;
}
void solve() {
	int n, f;
	cin >> n >> f;
	ll ans = 0;
	vector<pair<pair<int, int>, int> > vp(n);
	for(int i = 0; i < n; i++) {
		int k, l;
		cin >> k >> l;
		vp[i].first.first = min(2 * k, l) - min(k, l);
		vp[i].first.second = min(2 * k, l);
		vp[i].second = min(k, l);
	}
	sort(vp.begin(), vp.end(), cmp);
	for(int i = 0; i < n; i++) {
		if(i < f) {
			ans += vp[i].first.second;
		}
		else {
			ans += vp[i].second;
		}
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


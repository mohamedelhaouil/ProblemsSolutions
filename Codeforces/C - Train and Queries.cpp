/*
*    by: MEL05
*/
#include<bits/stdc++.h>
/*#include<unordered_map>
#include<unordered_set>*/

using namespace std;
void ios_b() {
	ios_base :: sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
void f() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
#define debug(x) cerr << (#x) << " = " << x << endl;
#define sz(x) (int)(x).size()

typedef long long ll;
typedef unsigned long long ull;
ll gcd(ll a, ll b) { return (!b) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a / gcd(a, b)) * b); }
const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9 + 7);
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
vector<int> v;
void solve() {
	int n, q;
	cin >> n >> q;
	v.resize(n + 1);
	map<int, pair<int, int> > mp;
	for(int i = 1; i <= n; i++) {
		cin >> v[i];
		if(!mp[v[i]].first) mp[v[i]].first = INF;
		if(!mp[v[i]].second) mp[v[i]].second = -1;
		mp[v[i]].first = min(mp[v[i]].first, i);
		mp[v[i]].second = max(mp[v[i]].second, i);
	}
	for(int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		if(!mp.count(a) || !mp.count(b)) {
			cout << "NO" << endl;
			continue;
		}
		if(mp[a].first < mp[b].second) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
int main () {
	ios_b();
	f();
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
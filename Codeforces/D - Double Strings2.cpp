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
void solve() {
	int n;
	cin >> n;
	vector<string> v(n);
	set<string> s;
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		s.insert(v[i]);
	}
	for(int i = 0; i < n; i++) {
		string t = "", tt = v[i];
		for(int j = 0; j < (int)v[i].size(); j++) {
			t += tt[0];
			reverse(tt.begin(), tt.end());
			tt.pop_back();
			reverse(tt.begin(), tt.end());
			if(s.count(t) && s.count(tt)) {
				cout << 1;
				break;
			}
			if(j == (int)v[i].size() - 1) {
				cout << 0;
			}
		}
	}
	cout << endl;
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
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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	map<char, int> mp;
	for(auto x : s) {
		mp[x]++;
	}
	int ans = 0;
	for(char c = 'A'; c <= 'Z'; c++) {
		if(mp[c] == mp[char(c + 32)]) ans += mp[c];
		else {
			if(k) {
				int x = min(k, abs(mp[c] - mp[char(c + 32)]) / 2);
				k -= x;
				ans += x + min(mp[c], mp[char(c + 32)]);
			}
			else {
				ans += min(mp[c], mp[char(c + 32)]);
			}
		}
	}
	cout << ans << endl;
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
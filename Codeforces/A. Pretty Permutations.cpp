/*
*    by: itachi_ruto
*/
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>

#define debug(x) cerr << (#x) << " = " << x << endl;

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
	if(n % 2) {
		cout << 3 << " " << 1 << " " << 2;
		for(int i = 4; i <= n; i+=2) {
			cout << " " << i + 1 << " " << i;
		}
	}
	else {
		cout << 2  << " " << 1;
		for(int i = 3; i <= n; i+=2) {
			cout << " " << i + 1 << " " << i;
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
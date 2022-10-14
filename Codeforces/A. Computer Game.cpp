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
int a[2][105];
void solve() {
	int n;
	cin >> n;
	string l[2];
	cin >> l[0] >> l[1];
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < n; j++) {
			a[i][j] = l[i][j] - '0';
		}
	}
	if(a[0][0] || a[1][n - 1]) {
		cout << "NO" << endl;
		return;
	}
	for(int i = 0; i < n; i++) {
		if(a[0][i] && a[1][i]) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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


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
#define sz(x) (int)(x).size()
#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define debug(x) cerr << (#x) << " = " << x << endl;

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
	int n = 10;
	string s[n];
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(s[i][j] == 'X') {
				if(i == 0 || j == 0 || i == n - 1 || j == n - 1) ans++;
				else if(i == 1 || j == 1 || i == n - 2 || j == n - 2) ans += 2;
				else if(i == 2 || j == 2 || i == n - 3 || j == n - 3) ans += 3;
				else if(i == 3 || j == 3 || i == n - 4 || j == n - 4) ans += 4;
				else if(i == 4 || j == 4 || i == n - 5 || j == n - i - 5) ans += 5;
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
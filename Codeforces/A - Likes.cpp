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
	int neg = 0, pos = 0;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		if(x > 0) pos++;
		else neg++;
	}
	for(int i = 0; i < pos; i++) {
		cout << i + 1 << " ";
	}
	for(int i = 0; i < neg; i++) {
		cout << pos - i - 1 << " ";
	}
	cout << endl;
	for(int i = 0; i < neg; i++) {
		cout << 1 << " " << 0 << " ";
	}
	for(int i = 0; i < (pos - neg); i++) {
		cout << i + 1 << " ";
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
/*
*
*	by: MEL05
*
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
#define dbg(x) cerr << (#x) << " = " << x << endl;

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
	vector<int> v(n);
	int idx = 0, idx2 = 0;
	bool bl = 1;
	// dbg(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		if(v[i] != i + 1 && bl) {
			idx = i;
			bl = 0;
			// dbg(idx);
		}
		if(!bl && v[i] == idx + 1) {
			idx2 = i;
			// dbg(idx2);
		}
	}
	reverse(v.begin() + idx, v.begin() + idx2 + 1);
	for(int i = 0; i < n; i++) {
		cout << v[i] << " ";
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

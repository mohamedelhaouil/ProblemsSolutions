/*
*    by: itachi_ruto
*/
#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#define debug(x) cerr << (#x) << " = " << x << endl;

using namespace std;
void ioos() {
	ios_base :: sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
void fff() {
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
	vector<int> x(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	set<int> s;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			s.insert((x[j] - x[i]));
		}
	}
	cout << (int)s.size() << endl;
}
int main () {
	ioos();
	fff();
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}


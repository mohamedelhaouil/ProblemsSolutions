/*
*
*	by: itachi37
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
	string s;
	cin >> s;
	int x, y;
	int mx = -1;
	char c1, c2;
	for(int i = 0; i < s.size() - 1; i++) {
		int a = (int)s[i] - '0', b = (int)s[i + 1] - '0';
		int sum = a + b;
		c1 = char((sum / 10) + '0');
		c2 = char((sum % 10) + '0');
		if(mx < (a + b) && c1 > s[i]) {
			mx = a + b;
			x = i;
			y = i + 1;
			c1 = char((mx / 10) + '0');
			c2 = char((mx % 10) + '0');
		}
	}
	bool bl1 = 1;
	if(!(mx / 10)) bl1 = 0;
	s[x] = c1;
	s[y] = c2;
	int i;
	for(i = 0; i < s.size(); i++) {
		if(s[i] != '0') break;
	}
	for(; i < s.size(); i++) {
		if(!bl1 && i == x) continue;
		cout << s[i];
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


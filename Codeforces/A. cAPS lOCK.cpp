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
	int n = s.size();
	if(n == 1 && s[0] >= 'a') {
		cout << char(s[0] - 32) << endl;
		return;
	} 
	for(int i = 0; i < n; i++) {
		if(s[i] < 'a'){
			if(i == n - 1) {
				for(int j = 0; j < n; j++) {
					if(j == 0) cout << char(s[0] + 32);
					else cout << char(s[j] + 32);
				}
				cout << endl;
				return;
			}
			continue;
		}
		else break;
	}
	if(s[0] >= 'a') {
		for(int i = 1; i < n; i++) {
			if(s[i] < 'a') {
				if(i == n - 1) {
					for(int j = 0; j < n; j++) {
						if(j == 0) cout << char(s[0] - 32);
						else cout << char(s[j] + 32);
					}
					cout << endl;
					return;
				}
				continue;
			}
			else break;
		}
	}
	cout << s << endl;
}
int main () {
	ios_b();
	f();
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
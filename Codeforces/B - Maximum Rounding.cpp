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
	string s;
	cin >> s;
	int n = (int)s.size();
	int mn = -1;
	for(int i = 0; i < n; i++) {
		if(s[i] >= '5') {
			mn = i;
			break;
		}
	}
	if(mn == -1) {
		cout << s << endl;
	}
	else {
		string ss = "";
		int i, b = 1;
		if(!mn) ss += '1';
		for(i = mn - 1; i >= 0; i--) {
			if(i == 0 && b) {
				if(s[0] >= '4') {
					ss += "01";
				}
				else {
					ss += s[i] + b;
				}
			}
			else if(s[i] >= '4' && b) {
				ss += '0';
				b = 1;
			}

			else {
				ss += s[i] + b;
				b = 0;
			}
		}
		reverse(ss.begin(), ss.end());
		cout << ss;
		i = mn;
		while(i < n) {
			cout << 0;
			i++;
		}
		cout << endl;
	}
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
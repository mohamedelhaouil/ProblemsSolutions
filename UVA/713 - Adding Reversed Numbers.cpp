/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define sq(s) ((s) * (s))
#define eb emplace_back
#define pb push_back
#define mp make_pair
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
const int mxn = 1e5 + 5;
void solve() {
	string s1, s2;
	cin >> s1 >> s2;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int n1 = s1.size(), n2 = s2.size();
	int n = max(n1, n2);
	if(n1 > n2) {
		int d = n1 - n2;
		for(int i = 0; i < d; i++) {
			s2 = '0' + s2;
		}
	}
	if(n2 > n1) {
		int d = n2 - n1;
		for(int i = 0; i < d; i++) {
			s1 = '0' + s1;
		}
	}
	int carry = 0;
	string ans;
	for(int i = n - 1; i >= 0; i--) {
		int x;
		int a = s1[i] - '0' + s2[i] - '0' + carry;
		if(a >= 10) {
			x = a % 10;
			carry = a / 10;
		}
		else {
			x = a;
			carry = 0;
		}
		ans += char(x + 48);
	}
	if(carry != 0) ans += char(carry + 48);
	int i = 0;
	while(i < sz(ans) && ans[i] == '0') i++;
	for(; i < sz(ans); i++) {
		cout << ans[i];
	}
	cout << endl;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}


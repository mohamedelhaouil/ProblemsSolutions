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
int x[mxn];
void solve() {
	int n;
	cin >> n;
	string s, t = "abacaba", s2;
	cin >> s;
	for(int i = 0; i < n; i++) {
		s2 = s;
		bool bl = true;
		for(int j = 0;  j < sz(t); j++) {
			if(s2[i + j] != '?' && s2[i + j] != t[j]) {
				bl = false;
				break;
			}
			s2[i + j] = t[j];
		}
		size_t found = s2.find(t);
		if(bl && found != string::npos && s2.find(t, found + 1) == string::npos) {
			cout << "YES" << endl;
			for(int i = 0; i < n; i++) {
				if(s2[i] != '?') cout << s2[i];
				else cout << 'd';
			}
			cout << endl;
			return;
		}
	}
	cout << "NO" << endl;
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


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>
//#include<unordered_map>
//#include<unordered_set>
#define debug(x) cerr << (#x) << " = " << x << endl
#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define sq(s) ((s) * (s))
#define endl        '\n'
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define X real()
#define Y imag()

using namespace std;
void fast() {
	ios_base :: sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
#endif
}
typedef long long ll;
typedef unsigned long long ull;
typedef complex<double> point;
ll gcd(ll a, ll b) { return (!b) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a / gcd(a, b)) * b); }
const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9 + 7);
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
const int mxn = 3e5 + 5;
void solve() {
	string s;
	cin >> s;
	vector<int> v(27);
	for(int i = 0 ; i < sz(s); i++) {
		v[s[i] - 'A']++;
	}
	int ecnt = 0, ocnt = 0;
	string c = "", ans = "";
	for(int i = 0; i < 26; i++) {
		if(v[i] & 1) {
			ocnt++;
			c = char(i + 'A');
		}
		else ecnt++;
	}
	if(ocnt > 1) {
		cout << "NO SOLUTION" << endl;
		return;
	}
	for(int i = 0; i < 26; i++) {
		if(v[i]) {
			for(int j = 0; j < (v[i]  / 2); j++) {
				ans += (i + 'A');
			}
		}
	}
	string ans1 = ans;
	reverse(ans1.begin(), ans1.end());
	cout << ans << c << ans1 << endl;
}
int main () {
	fast();
//	freopen("lowerupper.in", "r", stdin);
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


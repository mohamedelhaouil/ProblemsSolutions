/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>
//#include<unordered_map>
//#include<unordered_set>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")s
#define debug(x) cout << (#x) << " = " << x << endl
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
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
const int mxn = 1e2 + 5;
int x[mxn], dp[102][3];
int n;
int minDays(int i, int last) {
	if(i >= n) return 0;
	int &ret = dp[i][last];
	if (ret != -1) {
		return ret;
	}
	if(x[i] == 0) {
		ret = minDays(i + 1, 0) + 1;
	}
	if(x[i] == 1) {
		if(last == x[i]) {
			ret = minDays(i + 1, 0) + 1;
		}
		else {
			ret = minDays(i + 1, 1);
		}
	}
	if(x[i] == 2) {
		if(last == x[i]) {
			ret = minDays(i + 1, 0) + 1;
		}
		else {
			ret = minDays(i + 1, 2);
		}
	}
	if(x[i] == 3) {
		int a = (last == 1 ? INF : ret = minDays(i + 1, 1));
		int b = (last == 2 ? INF : ret = minDays(i + 1, 2));
		ret = min(a, b);
	}
	return ret;
}
void solve() {
	memset(dp, -1, sizeof(dp));
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x[i];
	}
	int ans = minDays(0, 0);
	cout << ans << endl;
}
int main () {
	fast();
//	file();
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


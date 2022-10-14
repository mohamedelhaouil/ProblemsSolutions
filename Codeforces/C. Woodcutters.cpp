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
const int mxn = 1e5 + 5;
int x[mxn], h[mxn];
int dp[mxn][2];
int n;
void solve() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> x[i] >> h[i];
	}
	dp[0][0] = 1;
	dp[0][1] = -INF;
	for(int i = 1; i < n; i++) {
		if(x[i] - h[i] > x[i - 1]) {
			dp[i][0] = max(dp[i][0], dp[i - 1][0] + 1);
		}
		else {
			dp[i][0] = max(dp[i][0], dp[i - 1][0]);
		}
		if(x[i] - h[i] > x[i - 1] + h[i - 1]) {
			dp[i][0] = max(dp[i][0], dp[i - 1][1] + 1);
		}
		else {
			dp[i][0] = max(dp[i][0], dp[i - 1][1]);	
		}
		if(i == n - 1 || x[i] + h[i] < x[i + 1]) {
			dp[i][1] = max(dp[i][1], max(dp[i - 1][0], dp[i - 1][1]) + 1);
		}
		else dp[i][1] = -INF;
	}
	cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;
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


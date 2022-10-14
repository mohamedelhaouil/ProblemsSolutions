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
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
const int mxn = 1e3 + 5;
int dcol[mxn];
int dp[mxn][mxn][3];
int n, m, x, y;
int solveBarcode(int col, int cnt, int last) {
	if(col == m) {
		if(cnt < x || cnt > y) {
			return INF;
		}
		return 0;
	}
	int &ans = dp[col][cnt][last];
	if(ans != -1) {
		return ans;
	}
	int dots = INF;
	if(col == 0 || (last == 0 && cnt + 1 <= y)|| (last == 1 && cnt >= x)){
		dots = n - dcol[col] + solveBarcode(col + 1, (last == 0) ? cnt + 1 : 1, 0);
	}
	int hashes = INF;
	if(col == 0 || (last == 1 && cnt + 1 <= y) || (last == 0 && cnt >= x)){
		hashes = dcol[col] + solveBarcode(col + 1, (last == 1) ? cnt + 1 : 1, 1);
	}
	ans = min(dots, hashes);
	return ans;
}
void solve() {
	cin >> n >> m >> x >> y;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			char ch; cin >> ch;
			if(ch == '.') dcol[j]++;
		}
	}
	memset(dp, -1, sizeof dp);
	cout << solveBarcode(0, 0, 2);
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


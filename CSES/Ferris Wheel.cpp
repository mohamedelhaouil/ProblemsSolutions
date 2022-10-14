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
int dr[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dc[] = {1, -1, 0, 0, -1, 1, 1, -1};
const int mxn = 3e5 + 5;
void solve() {
	int n, x;
	cin >> n >> x;
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(all(v));
	int l = 0, r = n - 1, ans = 0;
	int cnt = 0;
	while(l < r) {
		if(v[r] + v[l] <= x) {
			++ans;
			++l, --r;
			cnt += 2;
		}
		else {
			++cnt;
			++ans;
			--r;
		}
	}
	if(cnt < n) ++ans; 
	cout << ans << endl;
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


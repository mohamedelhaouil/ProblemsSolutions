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
const int mxn = 50;
int a[mxn], b[mxn];
void solve() {
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	sort(a, a + n);
	sort(b, b + n);
	for(int i = 0; i < k; i++) {
		if(a[i] >= b[n - i - 1]) continue;
		a[i] = b[n - i - 1];
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		ans += a[i];
	}
	cout << ans << endl;
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


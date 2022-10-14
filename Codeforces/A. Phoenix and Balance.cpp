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
const int mxn = 3e5 + 5;
int x[mxn];
void solve() {
	int n, k;
	cin >> n >> k;
	ll sum = 0;
	for(int i = 1; i <= n; i++) {
		cin >> x[i];
		if(i <= k) {
			sum += x[i];
		}
	}
	ll ans = sum;
	int id = 1;
	for(int l = 1, r = k + 1; r <= n; r++, l++) {
		sum -= x[l];
		sum += x[r];
		if(sum < ans) {
			ans = min(ans, sum);
			id = l + 1;
		}
//		cout << sum << endl;
	}
	cout << id << endl;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


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
	int n, k;
	cin >> n >> k;
	int a = n - (k - 1);
	if(a > 0 && a % 2) {
		cout << "YES" << endl;
		for(int i = 0; i < k - 1; i++) {
			cout << 1 << " ";
		}
		cout << a << endl;
		return;
	}
	a = n - 2 * (k - 1);
	if(a > 0 && a % 2 == 0) {
		cout << "YES" << endl;
		for(int i = 0; i < k - 1; i++) {
			cout << 2 << " ";
		}
		cout << a << endl;
		return;
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


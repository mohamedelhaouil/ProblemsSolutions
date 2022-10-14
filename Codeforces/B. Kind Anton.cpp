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
const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
const int mxn = 1e5 + 5;
int a[mxn], b[mxn];
int x[mxn], y[mxn];
void solve() {
	int n, cnt1 = 0, cnt2 = 0;
	cin >> n;
	memset(x, 0, sizeof(x));
	memset(y, 0, sizeof(y));
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++) {
		if(a[i] == 1 && !cnt1) {
			for(int j = i + 1; j <= n; j++) {
				y[j]++;
			}
			cnt1++;
		}
		if(a[i] == -1 && !cnt2) {
			for(int j = i + 1; j <= n; j++) {
				x[j]++;
			}
			cnt2++;
		}
	}
	for(int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	if(a[0] != b[0]) {
		cout << "NO" << endl;
		return;
	}
	for(int i = n; i > 0; i--) {
		if(a[i] == b[i]) continue;
		else if(b[i] > a[i]) {
			if(y[i]) continue;
			else {
				cout << "NO" << endl;
				return;
			}
		}
		else {
			if(x[i]) continue;
			else {
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
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


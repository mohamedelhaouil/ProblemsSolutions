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
const int mxn = 100;
int x[mxn];
int n;
void solve() {
	for(int i = 0; i < n; i++) {
		cin >> x[i];
	}
	int ans = 0;
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(__gcd(x[i], x[j]) == 1) ans++;
		}
	}
	n--;
	if(ans) {
		cout << fixed << setprecision(6) << sqrt(6. * (float)(n * (n + 1) / 2) / (float)ans);
		cout << endl;
	}
	else {
		cout << "No estimate for this data set." << endl;
	}
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	while(cin >> n && n) {
		solve();
	}
	return 0;
}


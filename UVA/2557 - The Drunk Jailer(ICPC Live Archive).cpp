/**
 *
 *    author:  MEL05
 *
**/	
//Root :: Regionals 2002 :: North America - Greater NY	
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
int x[mxn] = {0};
void solve() {
	int n;
	cin >> n;
	cout << (int)sqrt(n) << endl;
//	for(int i = 1; i <= n; i++) {
//		for(int j = i; j <= n; j += i) {
//			if(x[j] == 0) x[j] = 1;
//			else x[j] = 0;
//		}
//	}
//	int ans = 0;
//	for(int i = 1; i <= n; i++) {
//		if(x[i]) ans++;
//	}
//	cout << ans << endl;
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


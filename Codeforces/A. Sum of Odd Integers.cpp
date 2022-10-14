/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define mp make_pair
#define pb push_back
#define EPS (1E-9)
#define INF ((int)1E9)
#define sq(s) ((s) * (s))
using namespace std;

typedef long long ll;
const int mxn = 1e5;
int x[mxn];
void solve() {
	int n, k;
	cin >> n >> k;
	if(n % k) cout << "NO" << endl;
	else cout << "YES" << endl;
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


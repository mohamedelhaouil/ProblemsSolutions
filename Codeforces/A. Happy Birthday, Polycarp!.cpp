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
#define sq(s) ((s) * (s))
using namespace std;

typedef long long ll;
void solve() {
	int n;
	cin >> n;
	int m = log(n) / log(10);
	if(n <= 9) {
		cout << n << endl;
	}
	else {
		int ans = m * 9;
		int s = 1;
		for(int i = 0; i < m; i++) {
			s = s * 10 + 1;
		}
		ans += n / s;
		cout << ans << endl;
	}
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


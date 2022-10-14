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
const int mx = 1e5 + 5;
int n, h[mx];
void solve() {
	int ans = 0, cnt = 0;
	for(int i = 0; i < n; i++) {
		cin >> h[i];
	}
	ans += h[0];
	for(int i = 0; i < n - 1; i++) {
		int d = h[i] - h[i + 1];
		cnt += d;
		if(cnt < 0) {
			ans += -1 * cnt;
			cnt = 0;	
		}
	}
	cout << ans << endl;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
//	while(t--) {
		solve();
//	}
	return 0;
}


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
	int a[3], ans = 0;
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	if(a[0] == a[2]) {
		cout << 0 << endl;
		return;
	}
	if(a[0] == a[1] && a[0] != a[2]) {
		if(a[2] - a[0] <= 2) {
			cout << 0 << endl;
			return;
		}
		a[0]++, a[1]++, a[2]-- ;
	}
	else if(a[0] != a[1] && a[1] == a[2]) {
		if(a[2] - a[0] <= 2) {
			cout << 0 << endl;
			return;
		}
		a[0]++, a[1]--, a[2]-- ;
	}
	else {
		if(a[1] - a[0] == 1 && a[2] - a[1] == 1) {
			cout << 0 << endl;
			return;
		}
		a[0]++, a[2]--;
	}
	ans = abs(a[0] - a[1]) + abs(a[0] - a[2]) + abs(a[1] - a[2]);
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


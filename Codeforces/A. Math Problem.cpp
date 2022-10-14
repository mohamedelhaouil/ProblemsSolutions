/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, mn = 1e9 + 6, mx = 0;
		cin >> n;
		int nn = n;
		while (n--) {
			int l, r;
			cin >> l >> r;
			mn = min(mn, r);
			mx = max(mx, l);
		}
		if(nn == 1 || mn > mx) cout << 0 << endl;
		else
			cout << abs(mx - mn) << endl;
	}
	return 0;
}


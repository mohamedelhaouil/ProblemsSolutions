/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		double a, b, c, d, k;
		cin >> a >> b >> c >> d >> k;
		double x, y;
		x = ceil(a/c), y = ceil(b/d);
		if(x + y <= k)
			cout << x << " " << y << endl;
		else
			cout << -1 << endl;
	}
	
	return 0;
}


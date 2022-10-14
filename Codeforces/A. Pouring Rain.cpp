/**
 *	
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const double pi = acos(-1.0);
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	double d, h, v, e;
	cin >> d >> h >> v >> e;
	double s = ((d / 2) * (d / 2) * pi), vol = s * h;
	double ans = vol / (v - e * s);
	if(v - e * s <= 0) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
		cout << fixed << setprecision(15) << ans;
	}
	return 0;
}


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

const double v = 50.;
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	double ans = 0.;
	cin >> n >> k;
	vector<pair<int , int> > vp(n);
	for(int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		vp[i].first = x; vp[i].second = y;
	}
	for(int i = 1; i < n; i++) {
		int x = vp[i].first - vp[i - 1].first, y = vp[i].second - vp[i - 1].second;
		double d = hypot(x, y);
		ans += d;
	}
	printf("%.9f", (ans / v) * k);
	return 0;
}


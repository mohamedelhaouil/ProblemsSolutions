/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
struct rect{
	double xl, yl, xr, yr;
};
struct point{
	double x, y;
};
const int N = 1e5;
rect r[10];
vector<point> p(N, {1e5, 1e5});
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	char t;
	int i = 0, j = 0, k, n;
	for(;i < 10; i++) {
		cin >> t;
		if(t == '*') {
			break;	
		}
		cin >> r[i].xl >> r[i].yl >> r[i].xr >> r[i].yr;
	}
	k = i;
	for(; j < N; j++) {
		double a, b;
		cin >> a >> b;
		if(a != 9999.9 && b != 9999.9) {
			p[j].x = a;
			p[j].y = b;
		}
		else break;
	}
	for(i = 0; i < N; i++) {
		if(p[i].x == 1e5) break;
		bool bl = false;
		for(j = 0; j < k; j++) {
			if(p[i].x > r[j].xl && p[i].x < r[j].xr) {
				if(p[i].y > r[j].yr && p[i].y < r[j].yl) {
					cout << "Point " << i + 1 << " is contained in figure " << j + 1 << endl;
					bl = true;
				}
			}
		}
		if(!bl) cout << "Point " << i + 1 <<  " is not contained in any figure" << endl;
	}
	/*
		Point 1 is contained in figure 2
		Point 2 is contained in figure 2
		Point 2 is contained in figure 3
		Point 3 is contained in figure 3
		Point 4 is not contained in any figure
		Point 5 is contained in figure 1
		Point 6 is not contained in any figure 
	*/
	return 0;
}

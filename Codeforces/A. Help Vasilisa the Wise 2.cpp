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
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
	for(int x1 = 1; x1 < 10; x1++) {
		for(int x2 = 1; x2 < 10; x2++) {
			for(int x3 = 1; x3 < 10; x3++) {
				for(int x4 = 1; x4 < 10; x4++) {
					if(r1 == x1 + x2 && r2 == x3 + x4) {
						if(c1 == x1 + x3 && c2 == x2 + x4) {
							if(d1 == x1 + x4 && d2 == x3 + x2) {
								if(x1 != x2 && x1 != x3 && x1 != x4 && x2 != x3 && x2 != x4 && x3 != x4) {
									cout << x1 << " " << x2 << endl;
									cout << x3 << " " << x4 << endl;
									return 0;
								}
							}
						}
					}
				}
			}
		}
	}
	cout << -1 << endl;
	
	return 0;
}


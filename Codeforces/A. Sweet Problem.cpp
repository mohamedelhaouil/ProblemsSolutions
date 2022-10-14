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
		int r,g,b;
		cin >> r >> g >> b;
		int x = max(r,max(g, b));
		int y = r + g + b - x;
		cout << min((x + y) / 2, y) << endl;
	}
	return 0;
}


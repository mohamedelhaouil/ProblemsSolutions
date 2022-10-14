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
		int x, y;
		cin >> x >> y;
		if((x == 1 && y != 1) || (x <= 3 && y >= 4)) 
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}


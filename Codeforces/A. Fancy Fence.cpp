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
		double a, sans, ans;
		cin >> a;
		if(a == 0 || a == 180) {
			cout << "NO" << endl;
			break;
		}
		sans = 360 / (180 - a);
		ans = sans - (int)(sans);
		ans != 0 ? cout << "NO" << endl : cout << "YES" << endl;	
	}
	
	return 0;
}


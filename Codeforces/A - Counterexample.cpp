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
	ll l, r;
	cin >> l >> r;
	if(l & 1) {
		l++;
	}
	if(r - l < 2 ) {
		cout << -1 ;
		return 0;
	}
	cout << l << " " << l + 1 << " " << l + 2;
	
	return 0;
}


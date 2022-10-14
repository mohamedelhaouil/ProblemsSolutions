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
	int a, b;
	cin >> a >> b;
	if(a == b){
		cout << a * 10 << " " << a * 10 + 1;
	}
	else if(a < b && b - a == 1) {
		cout << b * 10 - 1 << " " << b * 10;
	}
	else if(a == 9 && b == 1){
		cout << 9 << " " << 10;
	}
	else
		cout << -1;
	return 0;
}


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;
int bigmod(int x, int n) {
	int res;
	if(n == 0)
		return 1;
	res = bigmod(x, n/2);
	res = (res * res ) % 10;
	if(n & 1){
		res = (x * res) % 10;
	}
	return res;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, x = 1378;
	cin >> n;
	cout << bigmod(x, n);
	return 0;
}


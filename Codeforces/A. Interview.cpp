/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

const int mxn = 1005;

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, max1, max2;
	cin >> n;
	int a[mxn], b[mxn];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}
	max1 = a[0];
	for(int i = 0; i < n ; i++) {
		max1 |= a[i];
	}
	max2 = b[0];
	for(int i = 0; i < n; i++) {
		max2 |= b[i];
	}
//	max = a[n - 1] + b[n - 1];
	cout << max1 + max2<< endl;
	return 0;
}


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;


int mx = 100004;
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, k, mn = mx, o = 0;
	int a[mx];
	cin >> n >> k;
	for (int i = 0; i < n ; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n && k; i++) {
		if(a[i] < 0) {
			a[i] *= -1;
			k--;
		}
	}
	k %= 2;
	for (int i = 0; i < n && k; i++) {
		if(a[i] < mn) {
			mn = a[i] ;
			o = i;	
		}
	}
	if(k) a[o] *= -1; 
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << sum;
	
	return 0;
}


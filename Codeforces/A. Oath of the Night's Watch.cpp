/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

int main () {
	int n, ans = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	for (int i = 0; i < n; i++) {
		if (a[i] == a[0] || a[i] == a[n-1])
			ans++;
	}
	cout << n - ans;
	return 0;
}

/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

int main () {
	int n, sum = 0, ans = 0;
	cin >> n;
	int a[n+1];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+n);
	double mx = sum;
	for (int i = n-1; i >= 0; --i) {
		sum -= a[i];
		ans++;
		if (sum < (ceil(mx/2)))
			break;
	}
	cout << ans;
	return 0;
}

/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

int main () {
	long long n, k;
	cin >> n >> k;
	if (n % 2 == 0) {
		long long hl = n/2;
		if (k <= hl) {
			cout << 2*k - 1;
		}
		else {
			cout << (k - hl) * 2;

		}
	}
	else {
		long long hl = (n/2 + 1);
		if (k <= hl) {
			cout << 2*k - 1;
		}
		else {
			cout << (k - hl) * 2;

		}
	}
	return 0;
}

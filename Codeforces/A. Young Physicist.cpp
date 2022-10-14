/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin >> n;
	int a[n][3];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	int a1 = 0, b = 0, c = 0;
	for (int i = 0; i < n; i++) {
		a1 += a[i][0];
		b += a[i][1];
		c += a[i][2];
	}
	if (!a1 && !b && !c)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

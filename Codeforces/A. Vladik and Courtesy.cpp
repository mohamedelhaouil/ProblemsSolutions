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
	int a, b;
	cin >> a >> b;  // Vladik then Valera
	int cnt = 1;
	while (a >= 0 && b >= 0) {
		if(cnt % 2 == 1) a -= cnt, cnt++;
		else b -= cnt, cnt++;
	}
	a > b ? cout << "Valera" : cout << "Vladik";
	return 0;
}



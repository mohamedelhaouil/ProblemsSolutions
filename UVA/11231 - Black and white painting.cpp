/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
	ios_base :: sync_with_stdio(0);
	int n, m, c;
	while (cin >> n && n != 0) {
		cin >> m >> c;
		int res = (c == 1 ? 1 : 0);
		cout << ((n - 7) * (m - 7) + res) / 2 << "\n";
	}
	
	return 0;
}


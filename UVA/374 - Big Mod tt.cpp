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
	int b, p, m; //B^p mod m
	while (cin >> b) {
		cin >> p >> m;
		if(b == 1){
			cout << 1 % m <<endl;
		}
		else if(p == 1){
			cout << b % m <<endl;
		}
		else {
			int x = log(2147483647) / log(b);
			int y = p / x;
			int z = p % x;
			int an = int(pow(b, x))% m;
			int ans = 1;
			for (int i = 0; i < y; ++i) {
				ans *= an;
				ans %= m;
				if (i == y-1) {
					ans *= pow(b, z);
					ans %= m;
				}
			}
			cout << ans <<endl;
		}
	}
	return 0;

}


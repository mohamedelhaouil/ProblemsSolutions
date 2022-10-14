/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int bigmod(int b, int p, int m) {
	int res;
	if(p == 0)
		return 1;
	res = bigmod(b, p/2, m);
	res %= m;
	res *= res;
	res %= m;
	if(p % 2)
		return res = ((b % m) * res % m) % m;
	return res;
}

int main () {
	ios_base :: sync_with_stdio(false);
	int b, p, m; //B^p mod m
	while (cin >> b) {
		cin >> p >> m;
		cout << bigmod(b, p, m) << endl;
	}
	return 0;

}


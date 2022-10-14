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
	ll n, ans = 0;
	cin >> n;
	if(n & 1) ans = -1 * (n + 1) / 2;
	else ans = n / 2;
	cout << ans;
	return 0;
}


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;
 
typedef long long ll;

const ll MOD = (ll)(1e9 + 7);
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	ll n ;
	cin >> n;
	ll a = 1, b = 1;
	for (int i = 0; i < n; ++i){
		b = (b * 7) % MOD;
	}
	for (int i = 0; i < 3 * n; ++i){
		a = (a * 3) % MOD;
	}
	cout << (a - b + MOD) % MOD;
	return 0;
}


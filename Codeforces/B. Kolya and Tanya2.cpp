/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
const ll MOD = (ll)(1e9 + 7);
int bigmod(ll a, ll b) {
	ll res;
	if (b == 0)
		return 1;
	res = bigmod(a, b/2);
	res %= MOD;
	res *= res;
	res %= MOD;
	if(b & 1) {
		res = (a * res) % MOD;
	}
	return res;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	cout << (bigmod(3, 3 * n) - bigmod(7, n) + MOD) % MOD;
	
	return 0;
}

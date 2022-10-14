/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define mp make_pair
#define pb push_back
#define EPS (1E-9)
#define INF ((int)1E9)
#define sq(s) ((s) * (s))
using namespace std;

typedef long long ll;
ll sum(ll k) {
	return k * (k + 1) / 2;
}
ll sum(ll s, ll e) {
	if(e <= 1) return sum(e);
	return sum(e) - sum(s - 1);
}
ll solve(ll n, ll k) {
	ll s = 1, e = k;
	while(s < e) {
		ll mid = (e + s) / 2;
		ll ans = sum(mid, k);
		if(ans == n) return k - mid + 1;
		if(ans > n) s = mid + 1;
		else e = mid;
	}
	return k - s + 2;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	ll n, k;
	cin >> n >> k;
	if(n == 1) cout << 0 << endl;
	else if(n <= k) cout << 1 << endl;
	else {
		n--;
		k--;
		if(sum(k) < n) cout << -1 << endl;
		else cout << solve(n ,k) << endl;
		
	}
	
	return 0;
}


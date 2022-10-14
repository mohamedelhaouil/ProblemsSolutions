/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>
#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define sq(s) ((s) * (s))
#define eb emplace_back
#define pb push_back
#define mp make_pair


using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
const ll mxn = 1e5 + 5;
void solve() {
	ll n;
	cin >> n;
	set<ll> ans;
	for(ll i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			ans.insert(i);
			ans.insert(n / i);
		}
	}
	for(auto a : ans) {
		cout << a << endl;
	}
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


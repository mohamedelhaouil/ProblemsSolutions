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
#define sq(s) ((s) * (s))
using namespace std;

typedef long long ll;

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	ll a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	
	ll a1 = a, b1 = b, c1 = c, d1 = d;
	
	ll mn = min(b, min(c, d)), ans = mn * f;
	b -= mn, c -= mn, d -= mn;
	ans += (min(a, d) * e);
	
	ll mn1 = min(a1, d1), ans1 = mn1 * e;
	a1 -= mn1, d1 -= mn1;
	ans1 += min(b1, min(c1, d1)) * f;
	
	cout << (ans > ans1 ? ans : ans1) << endl;
	return 0;
}


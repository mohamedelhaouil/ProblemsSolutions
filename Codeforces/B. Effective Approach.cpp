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
const int mxn = 1e5 + 5;
int a[mxn]; 
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	ll n, m, ans1 = 0, ans2 = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a[x] = i;
	}
	cin >> m;
	for(int i = 1; i <= m; i++) {
		int x;
		cin >> x;
		ans1 += a[x];
		ans2 += n + 1 - a[x];
	}
	cout << ans1 << " " << ans2 << endl;
	return 0;
}

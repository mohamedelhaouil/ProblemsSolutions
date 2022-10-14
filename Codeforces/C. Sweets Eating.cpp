/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int mxn = (int)(2e5) + 5;
ll a[mxn];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	ll ans = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a , a + n);
	for(int i = 0; i < n; i++) {
		if(i >= m) {
			a[i] += a[i - m];
		}
		ans += a[i];
		cout << ans << " ";
	}
	return 0;
}


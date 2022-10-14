/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 102;
int a[N], p[1003];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, mx = -1;
	cin >> n;
	memset(p, 0, sizeof(p));
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		p[a[i]]++;
		mx = max(mx, p[a[i]]);
	}
	if(mx - 1 <= n / 2 && n & 1 || mx <= n / 2 && !(n & 1)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}


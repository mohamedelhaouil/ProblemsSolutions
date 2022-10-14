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
	int t;
	cin >> t;
	while(t--) {
		int n, x, a, b;
		cin >> n >> x >> a >> b;
		int mn = min(a, b), mx = max (a, b);
		cout << min(--n,mx + x - mn) << endl;
	}
	return 0;
}


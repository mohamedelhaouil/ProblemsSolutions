/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int mxn = 1e5+4;
int a[mxn], b[mxn];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, x, y;
		cin >> n;
		bool ans = false;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for(int i = 1; i <= n; i++) {
			cin >> b[i];
		}
		for(int i = 1; i <= n; i++) {
			if(a[i] != b[i]) {
				x = i;
				break;
			}
			if(i == n && a[i] == b[i]) ans = true;
		}
		for(int i = n; !ans && i > 0; i--) {
			if(a[i] != b[i]) {
				y = i;
				break;
			}
		}
		for(int i = 1; !ans && i <= 1000; i++) {
			for(int j = x; j <= y; j++) {
				if(a[j] + i != b[j]) {
					break;
				}
				if(j == y && a[j] + i == b[j]) ans = true;
			}
		}
		if(ans) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}
	return 0;
}


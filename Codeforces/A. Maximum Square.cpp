/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int mxn = 1005;
int a[mxn];
int main () {
	int k; cin >> k;
	while (k--) {
		int n; cin >> n;
		int m = n, ans = n;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		while(m--) {
			int cnt = 0;
			for(int i = 0; i < n; i++) {
				if(a[i] >= ans) {
			 		cnt++;
				}	
			}
			if(cnt >= ans) {
				cout << ans << endl;
				break;
			}
			ans--;
		}
	}
	return 0;
}


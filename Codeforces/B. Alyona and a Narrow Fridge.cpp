/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mxn = 1004;
int a[mxn];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, h;
	cin >> n >> h;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	bool bl = true;
	for(int i = 0; bl && i < n; i++) {
		int cmp = h, cnt = 0;
		sort(a, a + i + 1, greater<int>());	
		for(int j = 0; j <= i; j++) {
			if(j % 2 == 0) {
				if(a[j] > cmp) {
					bl = false;
					break;
				}
				cmp -= a[j];
			}
			cnt++;
		}
		if(bl) ans = cnt;
	}
	cout << ans << endl;
	return 0;
}

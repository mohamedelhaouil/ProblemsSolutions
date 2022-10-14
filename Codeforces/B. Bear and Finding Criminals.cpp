/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx = 200;
int main () {
	ios_base :: sync_with_stdio(false);
	int n, a, ans = 0, arr[mx];
	cin >> n >> a;
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	if (arr[a] == 1) ans++;
	for (int i = 1; i <= n; ++i) {
		if((int)(a - i) > 0 && arr[a - i] == 1 && (a + i) > n) {
			ans++;
		}
		else if((a + i) <= n && arr[a + i] == 1 && (int)(a - i) < 1) {
			ans++;	
		}
		else if((a + i) <= n && (int)(a - i) > 0) {
			if(arr[a + i] == 1 && arr[a - i] == 1) {
				ans++;
				ans++;
			}
		}
		else
			continue;
	}
	cout << ans;
	return 0;
}


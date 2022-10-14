/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx = 1002;
int arr [mx];

int main () {
	ios_base :: sync_with_stdio(false);
	
	int n, ans = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		int ans0 = 1;
		for (int j = i; j < n - 1; j++) {
			if(arr[j + 1] <= arr[j])
				ans0++;
			else
				break;
		}
		for (int k = i; k > 0; k--) {
			if(arr[k - 1] <= arr[k] )
				ans0++;
			else
				break;
		}
		ans = (ans0 > ans ? ans0 : ans);
	}
	cout << ans ;
	return 0;
}


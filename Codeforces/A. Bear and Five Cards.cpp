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
	int arr[6];
	int ans = 10000, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	for (int i = 0; i < 5; ++i) {
		int cnt = 0, sum0 = sum;
		for (int j = i; j < 5; j++) {
			if(arr[i] == arr[j] ) {
				cnt++;
			}
		}
		if(cnt == 2)
			sum0 -= arr[i]*2;
		else if(cnt >= 3)
			sum0 -= arr[i]*3;
		ans = min(ans,sum0);	
	}
	cout << ans;
	return 0;
}


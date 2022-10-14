/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int a[101];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < 2 * n + 1; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < 2 * n + 1 && k; i++) {
		int x = a[i];
		if(i & 1){
			if(--x > a[i + 1] && x > a[i - 1]) {
				a[i]--;
				k--;
			}
		}
	}
	for(int i = 0; i < 2 * n + 1; i++) {
		cout << a[i] << " ";
	}
	return 0;
}


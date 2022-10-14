/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

const int mx = 105;
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--) {
		int n;
		cin >> n;
		int cnt = 0, a[mx];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			for(int j = i+1; j < n; j++) {
				if(abs(a[i] - a[j]) == 1 ){
					cnt++;
					break;
				}	
			}
		}
		if(cnt) cout << 2 << endl;
		else cout << 1 << endl;
		
	}
	
	return 0;
}


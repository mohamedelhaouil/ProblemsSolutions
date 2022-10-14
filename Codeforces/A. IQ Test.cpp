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
	char a[4][4];
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cin >> a[i][j];
		}
	}
	int cnt1 = 0;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(a[i][j] == '#') cnt1++ ;
			if(a[i][j + 1] == '#') cnt1++ ;
			if(a[i + 1][j] == '#') cnt1++ ;
			if(a[i + 1][j + 1] == '#') cnt1++ ;
			if(cnt1 != 2) {
				cout << "YES" << endl;
				return 0;
			}
			cnt1 = 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}


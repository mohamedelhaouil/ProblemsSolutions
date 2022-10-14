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
	int n, m;
	cin >> n >> m;
	int a[50];
	a[0] = 0, a[1] = 0;
	for(int i = 2; i <= 50; i++) {
		a[i] = 1;
	}
	for(int i = 2; i <= 50; i++ ) {
		for(int j = i * i; j <= 50; j += i) {
			a[j] = 0;
		}
	}
	int p[20], j = 1;
	for(int i = 2; i < 50; i++) {
		if(a[i] == 1) {
			p[j] = i;
			j++;
		}
	}
	for(int i = 1; i < 20; i++) {
		if(p[i] == n) {
			if(p[i + 1] == m) cout << "YES" << endl;
			else 	cout << "NO" << endl;
		}
	}
	return 0;
}


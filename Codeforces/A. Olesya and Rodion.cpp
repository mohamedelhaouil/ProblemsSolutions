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
	int n, t;
	cin >> n >> t;
	if(t == 10 && n == 1) {
		cout << -1;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		if(!i) cout << t;
		else if(t == 10 && i == n-1) break;
		else cout << 0;
		
	}
	return 0;
}


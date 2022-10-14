/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;
const int mx = 105;
int main () {
	#ifdef _DEBUG
		freopen("input.txt", "r", stdin);
//		freopen("output.txt", "w", stdout);
	#endif
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int q; cin >> q;
	while(q--) {
		int n, sum = 0; cin >> n;
		int s[mx];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
			if(s[i] <= 2048)
				sum += s[i];
		}
		if(sum >= 2048)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}


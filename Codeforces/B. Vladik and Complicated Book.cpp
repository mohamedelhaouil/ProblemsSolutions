/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
const int mx = 10005;
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, m, p[mx];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	while (m--) {
		int l, r, x, cnt = 0;
		cin >> l >> r >> x;
		for (int i = l; i <= r; i++) {
			if(p[x] > p[i]) // p[x] < p[i]
				cnt++;
		}
		if(l + cnt == x) //  r - cnt
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		
	}
	
	return 0;
}


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 200003;
int p[N];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> p[i];
		}		
		int ans = 1e6;
		vector<int> vis(n + 3, -1);
		for(int i = 0; i < n; i++) {
			if(vis[p[i]] != -1)
				ans = min(ans, i - vis[p[i]] + 1);
			vis[p[i]] = i;
		}
		if(ans > n) ans = -1;
		cout << ans << endl;
		
	}
	return 0;
}


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 2e5 + 4;
int p[N];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++) {
			int x; cin >> x;
			p[x] = i;
		}
		string ans = "";
		int r = 0, l = n + 1;
		for(int i = 1; i <= n; i++) {
			l = min(l, p[i]);
			r = max(r, p[i]);
			if(r - l + 1 == i) {
				ans += '1';
			}
			else ans += '0';
		}
		cout << ans << endl;
	} 
	return 0;
}

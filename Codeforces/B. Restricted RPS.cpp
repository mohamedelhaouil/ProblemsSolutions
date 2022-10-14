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
	int t;
	cin >> t;
	while(t--) {
		int n, a, b, c, cnt = 0;
		string s;
		cin >> n >> a >> b >> c >> s;
		string ans(n, '0');
		for(int i = 0; i < n; i++) {
			if(s[i] == 'R' && b) {
					b--;
					ans[i] = 'P';
					cnt++;
			}
			else if(s[i] == 'P' && c) {
					c--;
					ans[i] = 'S';
					cnt++;
			}
			else if(s[i] == 'S' && a){
					a--;
					ans[i] = 'R';
					cnt++;
			}
		}
		if(2 * cnt >= n ) {
			for(int i = 0; i < n; i++) {
				if(ans[i] == '0') {
					if(a) {
						ans[i] = 'R';
						a--;
					}
					else if(b) {
						ans[i] = 'P';
						b--;
					}
					else{
						ans[i] = 'S';
						c--;
					}
				}
			}	
			cout << "YES" << endl << ans << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 2e5+2;
int a[N];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		ans += y - x + 1;
	}
	if(ans % k == 0) cout << 0 << endl;
	else {
		int s = ans;
		for(int i = 0; i < 1e5; i++) {
			s++;
			if(s % k == 0) {
				cout << s - ans << endl;
				break;
			}
		}
	} 
	return 0;
}


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 2e5+2;
int x[N];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	for(int i = 0; i < n; i++) {
		cin >> x[i];
	}
	int ans = 1e9;
	for(int i = 0; i < n - 1; i++) {
		if(x[i] < x[i + 1] && s[i] == 'R' && s[i + 1] == 'L') {
			ans = min(ans, (x[i + 1] - x[i]) / 2);
		}
	}
	if(ans == 1e9) cout << -1 << endl;
	else cout << ans << endl;
	return 0;
}


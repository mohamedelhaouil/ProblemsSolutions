/**
 *
 *    author:  MEL05
 *
**/


#include<bits/stdc++.h>

#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define mp make_pair
#define pb push_back
#define EPS (1E-9)
#define INF ((int)1E9)
#define sq(s) ((s) * (s))
using namespace std;

typedef long long ll;
void solve() {
	string s;
	cin >> s;
	int cnt = 0, cnt2 = 0, ans = 0, a = 0;
	for(int i = sz(s) - 1; i >= 0; i--) {
		if(s[i] == '1') break;
		a++;
	}
	for(int i = 0; i < sz(s) - a; i++) {
		if(s[i] == '1') cnt2++;
		if(cnt2 && s[i] == '0') ans++;
	}
	cout << ans << endl;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}


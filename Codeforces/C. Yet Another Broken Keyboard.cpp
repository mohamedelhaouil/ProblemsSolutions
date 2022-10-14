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
#define sq(s) ((s) * (s))
using namespace std;

typedef long long ll;
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int mp[127];
	memset(mp, 0, sizeof(mp));
	for(int i = 0; i < k; i++) {
		char x;
		cin >> x;
		mp[x] = 1;
	}
	ll cnt = 0, ans = 0;
	for(int i = 0; i < sz(s); i++) {
		if(mp[s[i]] == 1) {
			cnt++;
		}
		else {
			if(cnt) ans += cnt * (cnt + 1) / 2;
			cnt = 0;
		}
	}
	if(cnt) ans += cnt * (cnt + 1) / 2;
	cout << ans << endl;
	return 0;
}

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
void solve() {
	string s;
	cin >> s;
	map<char, int> mp;
	for(int i = 0; i < sz(s); i++)
		mp[s[i]]++;
	int ud = min(mp['U'], mp['D']), rl = min(mp['R'], mp['L']);
	if(!ud && rl) rl = 1;
	if(ud && !rl) ud = 1;
	int ans = 2 * ud + 2 * rl;
	cout << ans << endl;
	for(int i = 0; i < ud; i++) cout << 'D';
	for(int i = 0; i < rl; i++) cout << 'R';
	for(int i = 0; i < ud; i++) cout << 'U';
	for(int i = 0; i < rl; i++) cout << 'L';
	cout << endl;
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

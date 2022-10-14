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
	int sz = sz(s);
	if(s[sz - 1] == 'o') cout << "FILIPINO" << endl;
	else if(s[sz - 1] == 'u') cout << "JAPANESE" << endl;
	else cout << "KOREAN" << endl;
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


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;


int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	map<string, int> mp;
	int n; cin >> n ;
	string ans;
	int mx = 0;
	while (n--) {
		string s; cin >> s;
		mp[s]++;
		if(mp[s] > mx) {
			mx = mp[s];
			ans = s;
		}
	}
	cout << ans;
	return 0;
}


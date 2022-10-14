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
	string s, ans = "";
	cin >> s;
	size_t sz = s.size();
	for(int i = 0; i < sz;) {
		if(i < sz - 2 && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B' ) {
			i += 3;
			if(ans.size() && ans[ans.size() - 1] != ' ')
				ans += ' ';
			continue;
		}
		ans += s[i];
		i++;
	}
	cout << ans;
	return 0;
}

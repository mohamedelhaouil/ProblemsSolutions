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
	while(t--){
		string s;
		cin >> s;
		int sz = (int)s.size();
		bool bl = true;
		for(int i = 0; i < sz; i++) {
			if(s[i] == s[i + 1] && s[i] != '?'){
				cout << -1 << endl;
				bl = false;
				break;
			}
		}
		for(int i = 0; i < sz; i++) {
			if(s[i] != '?') continue;
			if(s[i - 1] != 'a' && s[i + 1] != 'a')	s[i] = 'a';
			else if(s[i - 1] != 'b' && s[i + 1] != 'b') s[i] = 'b';
			else if(s[i - 1] != 'c' && s[i + 1] != 'c') s[i] = 'c';
		}
		if(bl) cout << s << endl;
	}
	return 0;
}


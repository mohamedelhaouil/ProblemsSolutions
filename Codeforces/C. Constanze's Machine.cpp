/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int mxn = 1e4+4;
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int sz = s.size(), ans = 0;
	map<string, int> mp;
	for(int i = 0; i < sz; i++) {
		if(s[i] == 'u' && s[i + 1] == 'u') {
			mp["uu"]++;
		}
		else if(s[i] == 'n' && s[i + 1] == 'n') {
			mp["nn"]++;
		}
		else if(s[i] == 'm') {
			mp["m"]++;
		}
		else if(s[i] == 'w') {
			mp["w"]++;
		}
		
	}
	if(mp["w"] && mp["m"]) {
		cout << 0 << endl;
		return 0;
	}
	if(!mp["uu"] && !mp["nn"]) {
		cout << 1 << endl;
		return 0;
	}
	
	return 0;
}


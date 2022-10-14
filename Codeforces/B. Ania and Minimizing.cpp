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
	int n, k;
	string s;
	cin >> n >> k;
	cin >> s;
	if (n == 1 && k) {
		cout << 0 ;
		return 0;
	}
	if(s[0] != '1' && k){
		s[0] = '1';
		k--;
	}
	if (k == 0) {
		cout << s ;
		return 0;
	}
	n--;
	for (int i = 1; k && n--; i++) {
		if(s[i] != '0') {
			s[i] = '0';
			k--;
		}
		else {
			continue;
		}
	}
	cout << s;
	return 0;
}


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

int main () {
	char x;
	string s;
	cin >> x >> s;
	int sz = s.size();
	string st = "qwertyuiopasdfghjkl;zxcvbnm,./";
	if (x == 'R') {
		for (int i = 0; i < sz; ++i) {
			for (int j = 0; j < 30; ++j) {
				if (s[i] == st[j])
					cout << st[j-1];
			}
		}
	}
	else {
		for (int i = 0; i < sz; ++i) {
			for (int j = 0; j < 30; ++j) {
				if (s[i] == st[j])
					cout << st[j+1];
			}
		}
	}
	return 0;
}

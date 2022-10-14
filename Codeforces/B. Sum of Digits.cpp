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
	string s;
	cin >> s;
	int cnt = 0, sum;
	while ((int)s.size() > 1) {
		sum = 0;
		for(int i = 0; i < (int)s.size(); i++) {
			sum += s[i] - '0';
		}
		stringstream ss;
		ss << sum;
		s = ss.str();
		cnt++;
	}
	cout << cnt;
	return 0;
}


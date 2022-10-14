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
	string s, t;
	cin >> s >> t;
	int sz = s.size();
	reverse (s.begin(), s.end());
	if(s == t)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}


/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

#define all(v)  ((v).begin()),((v).end())

int main () {
	set<char> st;
	string s;
	int n;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] >= 65 && s[i] < 91)
			s[i] += 32;
	}
	for (int i = 0; i < n; i++) {
		st.insert(s[i]);
	}
	if (st.size() == 26)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

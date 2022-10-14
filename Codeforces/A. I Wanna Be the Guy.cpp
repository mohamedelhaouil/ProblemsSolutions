/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

int main () {
	int n, p, q;
	cin >> n >> p;
	set<int> st;
	while (p--) {
		int x;
		cin >> x;
		st.insert(x);
		
	}
	cin >> q;
	while (q--) {
		int x;
		cin >> x;
		st.insert(x);
		
	}
	if (st.size() == n)
		cout << "I become the guy.";
	else
		cout <<  "Oh, my keyboard!";
	return 0;
}

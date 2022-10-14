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
	int n;
	string s;
	cin >> n >> s;
	int cnt0 = 0, cnt1 = 0;
	for (int i = 0; i < n; i++) {
		if(s[i] == '1') 
			cnt1++;
		else
			cnt0++;
	}
	cout << abs(cnt1 - cnt0);
	return 0;
}


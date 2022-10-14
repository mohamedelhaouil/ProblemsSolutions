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
	string s1, s2, a;
	getline(cin, s1,'|');
 	getline(cin, s2);
  	cin >> a;
	for(int i = 0; i < a.size(); i++) {
		if(s1.size() < s2.size()){
			s1 += a[i];
		}
		else
			s2 += a[i];
	}
	if(s1.size() != s2.size()){
   		cout << "Impossible" << endl;
   		return 0;
  	}
  	cout << s1 << '|' << s2 << endl;
	return 0;
}


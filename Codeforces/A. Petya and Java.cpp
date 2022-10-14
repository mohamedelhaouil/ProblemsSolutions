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
	string s;
	cin >> s;
	if (s.size() > 19 ) {
		cout << "BigInteger";
		return 0;
	}
	istringstream iss(s);
	ll x;
	iss >> x;
	ostringstream oss;
	oss << x;
	if (x <= 127 && x > 0)
		cout << "byte";
	else if (x > 127 && x <= 32767)
		cout << "short";
	else if (x > 32767 && x <= 2147483647)
		cout << "int";
	else if (x > 2147483647 && x <= 9223372036854775807  ){
		if (s != oss.str())
			cout << "BigInteger";
		else
			cout << "long";
	}
	else
		cout << "BigInteger";
		
	
	
	return 0;
}


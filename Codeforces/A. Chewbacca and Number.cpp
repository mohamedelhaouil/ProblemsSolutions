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
	string x;
	cin >> x;
	reverse(x.begin(), x.end());
	for(int i = 0; i < x.size(); i++) {
		if(x[i] >= '5' && x[i] != '9') {
			x[i] = char('9' - x[i] + '0');
		}
		if(i < x.size() - 1 && x[i] >= '5') {
			x[i] = char('9' - x[i] + '0');
		}
	}
	reverse(x.begin(), x.end());
	cout << x;
	return 0;
}



#include<bits/stdc++.h>

using namespace std;

int main () {
	unsigned int n;
	while (	cin >> n && n) {
		unsigned sq = (int) sqrt(n);
		if (sq * sq != n)
			cout << "no" <<endl;
		else
			cout << "yes" <<endl;
	}
	
	return 0;
}

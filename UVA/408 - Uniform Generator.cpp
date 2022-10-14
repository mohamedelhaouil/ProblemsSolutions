/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
	ios_base :: sync_with_stdio(0);
	int step, mod;
	while (cin >> step) {
		cin >> mod;
		set<int> st;
		int seed = 0, k = 1;
		st.insert(seed);
		while (k == st.size()) {
			seed = (seed + step) % mod;
			st.insert(seed);
			k++;
		}
		if (st.size() == mod) {
			cout << setw(10) << step << setw(10) << mod << "    Good Choice\n\n";
		}
		else {
			cout << setw(10) << step << setw(10) << mod << "    Bad Choice\n\n";
		}
	}
	
	return 0;
}


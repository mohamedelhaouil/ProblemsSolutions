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
	int n, m;
	cin >> n;
	vector<int> v(n), vi(n), vii(n);
	for(int i = 0; i < n; ++i) {
		int x ,y;
		cin >> x >> y;
		v[i] = abs(x - y);
		vi[i] = x;
		vii[i] = x;
	}
	stable_sort(vi.rbegin(), vi.rend());
	for(int i = 0; i < n; ++i) {
		if(v[i] != 0) {
			cout << "rated" ;
			return 0;
		}
	}
	for(int i = 0; i < n; ++i) {
		if(vi[i] != vii[i]) {
			cout << "unrated" ;
			return 0;
		}
	}
	cout << "maybe";
	return 0;
}


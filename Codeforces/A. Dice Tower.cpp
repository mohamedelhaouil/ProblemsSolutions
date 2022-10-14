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
	int n, x, a[101], b[101];
	cin >> n >> x;
	map<int, int> mp;
	mp[1] = 6, mp[2] = 5, mp[3] = 4;
	mp[4] = 3, mp[5] = 2, mp[6] = 1;
	for(int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	for(int i = 0; i < n; i++) {
		if(a[i] == x || mp[a[i]] == x) {
			cout << "NO" << endl;
			return 0;
		}
		if(b[i] == x || mp[b[i]] == x) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;

	return 0;
}


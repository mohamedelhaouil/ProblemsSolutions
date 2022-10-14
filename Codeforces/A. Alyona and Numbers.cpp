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
	ll cnt = 0;
	cin >> n >> m;
	int rm[5];
	memset(rm, 0, sizeof(rm));
	for(int i = 1; i <= n; i++) {
		rm[i % 5]++;
	}
	for(int i = 1; i <= m; i++) {
		cnt += rm[(5 - i % 5) % 5];
	}
	cout << cnt << endl;
	return 0;
}

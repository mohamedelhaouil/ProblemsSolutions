/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int mxn = 100005;
int l[mxn];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, sum = 0, max = 0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> l[i];
		sum += l[i];
		if(l[i] > max)
			max = l[i];
	}
	cout << max - (sum - max) + 1;
	return 0;
}


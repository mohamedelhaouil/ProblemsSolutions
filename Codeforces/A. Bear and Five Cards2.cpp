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
	map<int, int> mp;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int t;
		cin >> t;
		sum += t;
		++mp[t];
	}
	int ans = sum;
	map<int, int>::iterator p;
	for(p = mp.begin(); p != mp.end(); p++){
		if(p->second >= 2){
			ans = min(ans,sum - p->first*min(3,p->second));	
		}
	}
	cout << ans;
	return 0;
}


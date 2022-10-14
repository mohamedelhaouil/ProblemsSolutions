/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

const int mxn = 3e5;
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, k, d, ans = 1e9;
		int a[mxn];
		cin >> n >> k >> d;
		map<int ,int> mp;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]]++;
		}
		set<int> st;
		for(int i = 0; i < n; i++) {
			int x = d, cnt = 0;
			for(int j = i; x-- && j < n ; j++) {
				st.insert(a[j]);
				cnt++;
			}
			if(st.size() && cnt == d) ans = min(ans, (int)st.size());
			st.clear();	
		}
		cout << ans << endl;
	}
	
	return 0;
}

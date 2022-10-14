/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

const int mxn = 3e5;
int a[mxn];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, k, d, ans;
		cin >> n >> k >> d;
		map<int ,int> mp;
		set<int> st;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for(int i = 1; i <= d; i++) {
			st.insert(a[i]);
			mp[a[i]]++;
		}
		ans = st.size();
		for(int i = d + 1; i <= n; i++) {
			mp[a[i - d]]--;
			mp[a[i]]++;
			if(!mp[a[i - d]]) st.erase(a[i - d]);
			st.insert(a[i]);
			ans = min(ans, (int)st.size());
		}
		cout << ans << endl;
	}
	
	return 0;
}

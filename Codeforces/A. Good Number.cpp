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
	int n, k, cnt = 0;
	cin >> n >> k;
	while(n--) {
		string s; cin >> s;
		if(s.size() < k + 1) {
			continue;
		}
		else {
			set<char> st;
			for(int i = 0; i < s.size(); i++) {
				if(s[i] - '0' <= k) st.insert(s[i]);
			}
			if(st.size() == k + 1) cnt++;	
		}
	}
	cout << cnt << endl;
	return 0;
}

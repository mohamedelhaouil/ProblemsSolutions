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
	int n, x, cnt = 0;
	cin >> n;
	set<int> st, vs;
	vector<int> ans;
	for(int i = 0; i < n; i++) {
		cin >> x;
		cnt++;
		if(x > 0) {
			if(vs.count(x)) {
				cout << -1;
				return 0;
			}
			st.insert(x);
			vs.insert(x);
		}
		else {
			if(!st.count(abs(x))) {
				cout << -1 ;
				return 0;
			}
			st.erase(abs(x));
			if(st.size() == 0) {
				ans.push_back(cnt);
				vs.clear();
				cnt = 0;
			}
		}
	}
	if(st.size()) {
		cout << -1;
		return 0;
	}
	else {
		cout << ans.size() << endl;
		vector<int>::iterator p;
		for(p = ans.begin(); p != ans.end(); p++) {
			cout << *p << " ";
		}
	}
	
	return 0;
}


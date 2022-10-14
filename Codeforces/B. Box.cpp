/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int mxn = 1e5 + 5;
int q[mxn], p[mxn];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> q[i];
		}
		bool bl = true;
		vector<int> v;
		set<int> s;
		for (int i = 1; i <= n; i++) s.insert(i);
		v.push_back(q[0]);
		s.erase(q[0]);
		for(int i = 1; i < n; i++) {
			if(q[i] == q[i - 1]){
				int x = *s.begin();
				if(x < q[i - 1]){
					v.push_back(x);
					s.erase(x);
				}
				else {	
					bl = false;
					break;
				}
			}
			else if(q[i] < q[i - 1]) {
				bl = false;
				break;
			}
			else {
				v.push_back(q[i]);
				s.erase(q[i]);	
			}
		}
		if(bl) {
			for(int i = 0; i < n; i++) {
				cout << v[i] << " ";
			}
			cout << endl;
		}
		else
			cout << -1 << endl;
		
	}
	return 0;
}


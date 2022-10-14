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
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string p[11];
		set<string> vis;
		vector<int> done(n, 0);
		for(int i = 0; i < n; i++) {
			cin >> p[i];
			vis.insert(p[i]);
		}
		int cnt = vis.size();
		for(int i = 0; i < n; i++) {
			if(done[i]) continue;
			for(int j = i + 1; j < n; j++) {
				if(p[i] == p[j] ) {
					done[j] = 1;
					for(int k = 0; k < 4 && p[i] == p[j]; k++) {
						for(char c = '0'; c <= '9'; c++) {
							string t = p[j];
							t[k] = c;
							if(!vis.count(t)) {
								vis.insert(t);
								p[j] = t;
								break;
							}
						}
					}
				}
			}
		}
		cout << n - cnt << endl;
		for(int i = 0; i < n; i++) {
			cout << p[i] << endl;
		}
	}
	return 0;
}


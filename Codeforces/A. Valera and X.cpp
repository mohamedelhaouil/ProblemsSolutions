/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

const int mx = 305;
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	char p[mx][mx];
	set<char> st;
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> p[i][j];
			st.insert(p[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i==j || i == n - 1 - j){
				if(p[i][j] != p[0][0]) {
					cout << "NO" << endl;
					return 0;
				}
			}
			else {
				if(p[i][j] != p[0][1]) {
					cout << "NO" << endl;
					return 0;
				}	
			}
		}
	}
	if(st.size() != 2) cout << "NO" << endl;
	else cout << "YES" << endl;	
	return 0;
}


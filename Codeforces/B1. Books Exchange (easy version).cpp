/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;
const int mx = 205;
int main () {
	#ifdef _DEBUG
		freopen("input.txt", "r", stdin);
//		freopen("output.txt", "w", stdout);
	#endif
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int q; cin >> q;
	while(q--) {
		int n; cin >> n;
		int pi[mx], p[mx];
		for (int i = 0; i < n; i++) {
			cin >> p[i];
			--p[i];
			pi[i] = p[i];
		}
		for (int i = 0; i < n; i++){
			int pos = p[i], cnt = 0;
			do{
    		        	pos = p[pos];
    		        	cnt++;
			}while(pos != pi[i]);
			cout << cnt << " ";
		}
		cout << endl;	
	}
	
	return 0;
}


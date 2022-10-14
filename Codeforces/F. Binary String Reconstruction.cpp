/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define sq(s) ((s) * (s))
#define eb emplace_back
#define pb push_back
#define mp make_pair
using namespace std;

void solve() {
	int n1, n2, n3;
	string s = "";
	cin >> n1 >> n2 >> n3;
	if(!n2) {
		if(n1) {
			for(int i = 0; i <= n1 ; i++) cout << 0;
			cout << endl;
		}
		else {
			for(int i = 0; i <= n3; i++) cout << 1;
			cout << endl;	
		}
	}
	else {
		for(int i = 0; i < n1; i++) {
			cout << 0;
		}
		cout << "01"; --n2;
		for(int i = 0; i < n3; i++) {
			cout << 1;
		}
		int a = 0;
		while(n2) {
			cout << a;
			a ^= 1;
			--n2;
		}
		cout << endl;
	}
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}


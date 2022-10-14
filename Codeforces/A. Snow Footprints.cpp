/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define mp make_pair
#define pb push_back
#define sq(s) ((s) * (s))
using namespace std;

typedef long long ll;

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, s = 0, t = 0;
	string st;
	bool b1 = false, b2 = false;
	cin >> n >> st;
	for(int i = 0; i < n; i++) {
		if(st[i] == 'R' && !b1) {
			s = i + 1;
			b1 = true;
		}
		if(st[i] == 'L' && !b2) {
			t = i;
			b2 = true;
		}
	}
	if(!t) {
		for(int i = n - 1; i >= 0; i--) {
			if(st[i] != '.') {
				t = i + 2;
				break;
			}
		}	
	}
	if(!s) {
		for(int i = n - 1; i >= 0; i--) {
			if(st[i] != '.') {
				s = i + 1;
				break;
			}
		}
	}
	cout << s << " " << t << endl;
	return 0;
}


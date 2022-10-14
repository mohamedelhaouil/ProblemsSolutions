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
#define EPS (1E-9)
#define INF ((int)1E9)
#define sq(s) ((s) * (s))
using namespace std;

typedef long long ll;
void solve() {
	
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	string s = "ROYGBIV";
	int n;
	cin >> n;
	int r = n % 7;
	if(r > 3) r = 0;
	for(int i = 0; i < n - r; i++) {
		cout << s[i % 7];
	}
	if(r < 4) {
		if(r == 1) cout << 'G';
		if(r == 2) cout << "GB";
		if(r == 3) cout << "GBI";
	}
	return 0;
}


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

typedef unsigned long long ull;
const int mxn = 1e5;
int x[mxn];
int play(ull a, ull b) {
	if(!b) return 0;
	if(a % b == 0) return 1;
	if(a / b > 1) return 1;
	return play(b, a - b) + 1;
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
	ull a, b;
	while(cin >> a >> b && a && b) {
		int win = play(max(a, b), min(a, b));
		if(win & 1) cout << "Stan wins" << endl;
		else cout << "Ollie wins" << endl;
	}
	return 0;
}


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

typedef long long ll;
typedef unsigned long long ull;

const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
const int mxn = 1e5 + 5;
void solve() {
	int n;
	cin >> n;
	if(n == 1 || n == 2) {
		cout << 1 << endl;
		cout << 1 << endl;
	}
	else if(n == 3) {
		cout << 2 << endl;
		cout << 1 << " " << 3;
	}
	else if(n == 4) {
		cout << 4 << endl;
		cout << 3 << " " << 1 << " " << 4 << " " << 2;
	} 
	else {
		cout << n << endl;
		for(int i = 1; i <= n; i += 2) {
			cout << i << " ";
		}
		for(int i = 2; i <= n; i += 2) {
			cout << i << " ";
		}
	}
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


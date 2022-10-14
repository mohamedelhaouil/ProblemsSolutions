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
int x[mxn];
void solve() {
	int n; 
	cin >> n;
	if(n == 1) {
		cout << "yes" << endl;
		cout << 1 << " " << 1;
		return;
	}
	for(int i = 0; i < n; i++) {
		cin >> x[i];
	}
	vector<int> v;
	for(int i = 1; i < n; i++) {
		if(x[i] < x[i - 1]) {
			v.pb(i);
			if(i == n - 1) {
				v.pb(i + 1);
			}
		}
		else {
			if(!v.empty()) {
				v.pb(i);
				break;
			}
		}
	}
	if(!v.empty()) reverse(x + v[0] - 1, x + v[sz(v) - 1]);
	else v.pb(1);
	for(int i = 1; i < n; i++) {
		if(x[i] < x[i - 1]) {
			cout << "no" << endl;
			return;
		} 
	}
	cout << "yes" << endl;
	cout << v[0] << " " << v[sz(v) - 1] << endl;
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


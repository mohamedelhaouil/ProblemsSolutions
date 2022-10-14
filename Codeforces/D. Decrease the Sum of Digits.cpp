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
#define X real()
#define Y imag()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef complex<double> point;

const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
const int mxn = 1e5 + 5;
int x[mxn];
void solve() {
	ll s;
	string n;
	cin >> n >> s;
	int sum = 0;
	int id = 0;
	bool bl = true;
	for(int i = 0; i < sz(n); i++) {
		int dig = n[i] - '0';
		sum += dig;
		if(dig != 0 && sum <= s) {
			id = i;
			bl = false;
		}
		else if(sum > s) {
			break;
		}
		if(i == sz(n) - 1) {
			cout << 0 << endl;
			return;
		}
	}
	ull ans = 0;
	string ss = n.substr(id);
	istringstream sss(ss);
	sss >> ans;
//	cout << id << endl;
//	cout << ans << endl;
	cout << ull(((n[id] - '0') + 1) * pow(10, sz(n) - id - 1)) - (ull)ans << endl;
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


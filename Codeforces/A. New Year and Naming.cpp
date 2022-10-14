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
const int mxn = 22;
int q, n, m;
string s[mxn], t[mxn];

void solve() {
	int a, b, y;
	string ans;
	cin >> y;
	a = y % n, b = y % m;
	if(!a) a = n;
	if(!b) b = m;
	ans = s[a];
	ans += t[b];
	cout << ans << endl;
}

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> s[i];
	for(int i = 1; i <= m; i++) cin >> t[i];
	cin >> q;
	while(q--) {
		solve();
	}
	return 0;
}


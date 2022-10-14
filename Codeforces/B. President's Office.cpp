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
char s[102][102];
int n, m;
int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};
bool valid(int i, int j) {
	return i >= 0 && i < n && j >= 0 && j < m;
}
void solve() {
	char c;
	cin >> n >> m >> c;
	set<char> st;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> s[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(s[i][j] == c) {
				for(int k = 0; k < 4; k++) {
					int xx = i + x[k];
					int yy = j + y[k];
					if(!st.count(s[xx][yy]) && valid(xx, yy) && s[xx][yy] != '.' && s[xx][yy] != c) {
						st.insert(s[xx][yy]);
						ans++;
					}
				}
			}
		}
	}
	cout << ans << endl;
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


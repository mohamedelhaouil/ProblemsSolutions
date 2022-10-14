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


using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9);
const int mxn = 1e5 + 5;
int row[8] = {1, -1, 0, 0, 1, -1, -1, 1};
int col[8] = {0, 0, 1, -1, 1, 1, -1, -1};
set<pair<int, int> > st;
bool valid(int i, int j) {
	return i > 0 && j > 0 && i <= INF && j <= INF;
}
void solve() {
	int r0, c0, r1, c1;
	cin >> r0 >> c0 >> r1 >> c1;
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		int r, x, y;
		cin >> r >> x >> y;
		for(int j = x; j <= y; j++) {
			st.insert({r, j});
		}
	}
	map<pair<int, int>, int> mpp;
	queue<pair<pair<int, int>, int> > q;
	q.push({{r0, c0}, 0});
	mpp[{r0, c0}] = 1;
	while(!q.empty()) {
		pair<pair<int, int>, int> p = q.front(); q.pop();
		int r = p.first.first, c = p.first.second, dep = p.second;
		if(r == r1 && c == c1) {
			cout << dep << endl;
			return;
		}
		for(int i = 0; i < 8; i++) {
			int nc = c + col[i];
			int nr = r + row[i];
			if(valid(nr, nc) && st.count({nr, nc}) && !mpp[{nr, nc}]) {
				q.push({{nr, nc}, dep + 1});
				mpp[{nr, nc}] = 1;
			}
		}
	}
	cout << -1 << endl;
}
int main () {
	using namespace std;
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
	return 0;
}


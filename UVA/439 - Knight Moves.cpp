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
char a[4], b[4];
bool valid(int i, int j) {
	return i >= 0 && j >= 0 && i < 8 && j < 8;
}
int row[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int col[8] = {2, 1, -1, -2, -2, -1, 1, 2};
void solve() {
	char s[9][9];
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			s[i][j] = '0';
		}
	}
	int i = b[0] - 'a', j = b[1] - '1';
	s[i][j] = '1';
	i = a[0] - 'a', j = a[1] - '1';
	queue<pair<pair<int, int>, int> > q;
	q.push({{i, j}, 0});
	while(!q.empty()) {
		pair<pair<int, int>, int> p = q.front(); q.pop();
		int i1 = p.first.first, j1 = p.first.second, dep = p.second;
		if(s[i1][j1] == '1' || a == b) {
			cout << "To get from "<< a <<  " to " << b << " takes " << dep << " knight moves.\n";
			break;
		}
		s[i1][j1] = '.';
		for(int i = 0; i < 8; i++) {
			int rrow = i1 + row[i];
			int ccol = j1 + col[i];
			if(valid(rrow, ccol) && s[rrow][ccol] != '.') q.push({{rrow, ccol}, dep + 1});
		}
	}
}
int main () {
	using namespace std;
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
//	int t;
//	cin >> t;
	while(scanf("%s%s", a, b) != EOF) {
		solve();
	}
	return 0;
}


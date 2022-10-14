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
const int mxn = 3e4 + 5;
int x[mxn];
void solve() {
	int n, m;
	cin >> n >> m;
	memset(x, 0, sizeof(x));
	for(int i = 1; i < n; i++) {
		cin >> x[i];
	}
	queue<pair<int, int> > q;
	q.push({x[1], 1});
	while(!q.empty()) {
		pair<int, int> p; p = q.front();
		q.pop();
		int el = p.first, id = p.second;
		if(id == m) {
			cout << "YES";
			return;
		}
		if(el == 0) {
			break;
		}
		q.push({x[el + id], el + id});
	}
	cout << "NO";
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


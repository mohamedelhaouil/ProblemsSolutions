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
const int mxn = 2e5 + 1;
int x[mxn];
priority_queue<pair<int, int> > pq;
int solve() {
	int n;
	cin >> n;
	memset(x, 0, sizeof x);
	int idx = 1;
	pq.push(pair<int, int>(n, -1));
	while (!pq.empty()) {
		int lidx = -pq.top().second, len = pq.top().first;
		int ridx = lidx + len - 1;
		int mid = (lidx + ridx) / 2;
		pq.pop();
		x[mid] = idx++;
		if(mid - lidx > 0)
			pq.push(pair<int, int>(mid - lidx, -lidx));
		if(ridx - mid > 0)
		pq.push(pair<int, int>(ridx - mid, -mid - 1));
	}
	for(int i = 1; i <= n ; i++) {
		cout << x[i] << " ";
	}
	cout << endl;
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


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
	int w1, w2, n1, n2;
    	scanf("%d %d %d %d",&w1 , &w2, &n1, &n2);
    	if(n1 <= n2) printf("%d\n",(n2 - n1) * 2 * w2 + (n2 - n1 - 1) * w1);
    	else printf("%d\n",(n1 - n2) * 2 * w2 + (n1 - n2 + 1) * w1);
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


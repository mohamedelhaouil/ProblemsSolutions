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
const int mxn = 2e5 + 5;
int x[mxn];
void solve() {
	int n;
	cin >> n;
	int ans1 = 0, ans2 = 0, cnt = 0;
	int prev = 0;
	for(int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for(int s = 0, e = n - 1; s <= e;) {
		if(cnt&1^1) {
			int sum = 0;
			for(; s <= e && sum <= prev;) {
				sum += x[s++];		
			}
			prev = sum;
			ans1 += sum;
		}
		else {
			int sum = 0;
			for(;s <= e && sum  <= prev;) {
				sum += x[e--];
			}
			prev = sum;
			ans2 += sum;
		}
		cnt++;
	}	
	cout << cnt << " " << ans1 << " "<< ans2 << endl;
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


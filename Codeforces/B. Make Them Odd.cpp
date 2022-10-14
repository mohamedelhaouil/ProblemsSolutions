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
#define sq(s) ((s) * (s))
using namespace std;
const int N = 3e5;
int a[N];
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	int mx = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] % 2 == 0) 
		mx = max(mx, a[i]);
	}
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
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


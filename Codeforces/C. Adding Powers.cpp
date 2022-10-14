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
const int mxn = 40;
ll n, k, a[mxn];
void solve() {
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll mxp = 1, cnt = 0;
	while(mxp < 1e16) {
		mxp *= k;
		cnt++;
	}
	mxp = cnt;
	for(int i = mxp; i >= 0; i--) {
		for(int j = 0; j < n; j++) {
			if(!a[j]) continue;
			if(pow(k, i) <= a[j]) {
				a[j] -= pow(k, i);
				break;
			}
			
		}
	}
	bool bl = true;
	for(int i = 0; i < n; i++) {
		if(a[i]) bl = false;
	}
//	for(int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
	if(bl) {
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
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


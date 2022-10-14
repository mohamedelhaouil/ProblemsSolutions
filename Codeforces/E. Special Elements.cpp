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
int x[8000];
void solve() {
	int n;
	cin >> n;
	vector<int> occ(n + 1, 0);
	for(int i = 0; i < n; i++) {
		cin >> x[i];
		occ[x[i]]++;
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		int sum = x[i];
		for(int j = i + 1; j < n; j++) {
			sum += x[j];
			if(sum <= n) {
				ans += occ[sum];
				occ[sum] = 0;
			}
		}
	}
	cout << ans << endl;
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


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

typedef long long ll;

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, ans = 1;
	cin >> n;
	while(n > 1) {
		if(n & 1) {
			ans++;
			n--;
		}
		else {
			n /= 2;
		}
	}
	cout << ans;
	return 0;
}


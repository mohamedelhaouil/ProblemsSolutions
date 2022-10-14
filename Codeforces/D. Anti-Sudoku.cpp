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
char s[10][10];
void solve() {
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			cin >> s[i][j];
		}
	}
	int cnt = 0, prev = 0;
	for(int i = 0, j = 0; i < 9 && j < 9; i++) {
		if(s[i][j] != '9') s[i][j] += 1;
		else s[i][j] -= 1; 
		cnt++;
		j += 3;
		if(cnt == 3) {
			j = prev + 1;
			prev = j;
			cnt = 0;
		}
	}
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			cout << s[i][j];
		}
		cout << endl;
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


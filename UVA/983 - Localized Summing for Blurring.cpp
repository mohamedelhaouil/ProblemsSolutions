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
int n, m;
bool endLine;
void solve() {
	vector<vector<int> > sum(n + 5, vector<int>(n + 5, 0));
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			scanf("%d", &sum[i][j]);
			sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
		}
	}
	if (endLine) putchar('\n'); endLine = true;
	int k = n - m + 1;
	int ans = 0;
	for(int i = 1; i <= k; i++) {
		for(int j = 1; j <= k; j++) {
			int x = m + i - 1;
			int y = m + j - 1;
			int s_ans = sum[x][y] - sum[x][j - 1] - sum[i - 1][y] + sum[i - 1][j - 1];
			printf("%d\n", s_ans);
			ans += s_ans;
		}
	}
	printf("%d\n", ans);
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	// int t;
	// cin >> t;
	endLine = false;
	while(scanf("%d %d", &n, &m) != EOF){
		solve();
	}
	return 0;
}


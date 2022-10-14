/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

bool cmp(const pair<int, int> &vp1, const pair<int, int> &vp2){
	return (vp1.second > vp2.second);
}

typedef long long ll;

int mxn = 22, ans = 0;

int main () {
	ios_base :: sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector< pair<int, int> > vp;
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		vp.push_back(make_pair(a, b));
	}
	sort(vp.begin(), vp.end(), cmp);
	int i = 0;
	while(n && m--) {
		int mn = 0;
		mn = min(n, vp[i].first);
		n -= mn;
		ans += mn*vp[i].second;
		++i;
	}
		
	cout << ans;
	return 0;
}


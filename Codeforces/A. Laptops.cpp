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
const int N = 1e5 + 4;
int p[N];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	cin >> n;
	bool bl = false;
	vector<pair<int, int> > vp(n, {0, 0});
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		if(a != b) bl = true;
	}
	
	if(bl) cout << "Happy Alex" << endl;
	else cout << "Poor Alex" << endl;
	
	return 0;
}


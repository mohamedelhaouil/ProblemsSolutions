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
const int mxn = 1000;
double a[mxn];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n;
	double l, d = 0.;
	cin >> n >> l;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n - 1; i++) {
		d = max(d, abs(a[i] - a[i + 1]));
	}
	d /= 2;
	if(d < a[0] || d < l - a[n - 1])
		d = max(a[0], l - a[n - 1]);
	printf("%.10f", d);
	return 0;
}


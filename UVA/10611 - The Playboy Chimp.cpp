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
const int mxn = 5e4 + 5;
int n, q;
int lower(vector<int>& v, int k) {
	int start = 0, end = sz(v) - 1;
	int mid;
	while(start <= end) {
		mid = (start + end) / 2;
		if(v[mid] >= k) end = mid - 1; 
		else start = mid + 1;
	}
	if(end < 0 ) return -1; 
	return v[end];
}
int upper(vector<int>& v, int k) {
	int start = 0, end = sz(v) - 1;
	int mid;
	while(start <= end) {
		mid = (start + end) / 2;
		if(v[mid] <= k) start = mid + 1;
		else end = mid - 1;
	}
	if(start >= sz(v)) return -1;
	return v[start];
}
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	cin >> q;
	for(int i = 0; i < q; i++) {
		int c, down, up;
		cin >> c;
//		up = (upper_bound(all(v), c) == v.end() ? -1 : *upper_bound(all(v), c));
//		if(c > v[n - 1]) down = v[n - 1];
//		else if(c <= v[0]) down = -1;
//		else down = *(--lower_bound(all(v), c));
		up = upper(v, c);
		down = lower(v, c);
		if(down == -1) {
			cout << "X"; 
		}
		else {
			cout << down;
		}
		if(up == -1) {
			cout << " X" << endl;
		}
		else {
			cout << " " << up << endl;
		} 	
	}
	return 0;
}

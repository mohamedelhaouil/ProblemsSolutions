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
	int n, w = 0, b = 0;
	cin >> n;
	string s, s1 = "", s2 = "";
	cin >> s;
	for(int i = 0; i < n; i++) s1 += 'W', s2 += 'B';
	for(int i = 0; i < n; i++) {
		if(s[i] == 'W') w++;
		if(s[i] == 'B') b++;
	}
	if(s == s1 || s == s2) {
		cout << 0 << endl;
		return 0;
	}
	if(b & 1 && w & 1) {
		cout << -1 << endl;
		return 0;
	}
	vector<int > v;
	char sc = (b & 1) ? 'W' : 'B';
	for(int i = 0; i < n - 1; i++) {
		if(s[i] == sc) {
			v.pb(i + 1);
			s[i] = 'B' + 'W' - s[i];
            		s[i + 1] = 'B' + 'W' - s[i + 1];
		}
	}
	cout << sz(v) << endl;
	for(int i = 0; i < sz(v); i++) {
		cout << v[i] << (i < sz(v) - 1 ? ' ' : '\n');
	}

	return 0;
}

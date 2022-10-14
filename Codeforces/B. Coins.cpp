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

int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	map<char, int> mp;
	mp['A'] = 0, mp['B'] = 0, mp['C'] = 0; 
	string s[3];
	for(int i = 0; i < 3; i++) {
		cin >> s[i];
		if(s[i][1] == '<') mp[s[i][2]]++;
		else mp[s[i][0]]++;
	}
	if(mp['A'] == mp['B'] || mp['A'] == mp['C'] || mp['B'] == mp['C']) {
		cout << "Impossible" << endl;
		return 0;
	}
	if(mp['A'] == 0) cout << 'A';
	else if(mp['B'] == 0) cout << 'B';
	else cout << 'C';
	if(mp['A'] == 1) cout << 'A';
	else if(mp['B'] == 1) cout << 'B';
	else cout << 'C';
	if(mp['A'] == 2) cout << 'A';
	else if(mp['B'] == 2) cout << 'B';
	else cout << 'C';
}


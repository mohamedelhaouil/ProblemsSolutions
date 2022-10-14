
#include<bits/stdc++.h>
//#include<unordered_map>
//#include<unordered_set>
#define debug(x) cerr << (#x) << " = " << x << endl;
#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define sz(s) (int)(s).size()
#define sq(s) ((s) * (s))
//#define endl        '\n'
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define X real()
#define Y imag()

using namespace std;
void fast() {
	ios_base :: sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
void file() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
#endif
}
typedef long long ll;
typedef unsigned long long ull;
typedef complex<double> point;
ll gcd(ll a, ll b) { return (!b) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a / gcd(a, b)) * b); }
const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9 + 7);
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
const int mxn = 3e2 + 5;
int x[mxn];
void solve() {
	string s, t;
	cin >> s >> t;
	if(s.size() < t.size()) {
		swap(s,t);
	}
	int i = 0;
	while(i < 20) {
		string ss = s;
		for(int j = 0; j < i; j++)
			ss += s;
		if((int)ss.size() % (int)t.size() == 0) {
			int a = (int)t.size();
			int j; 
			for(j = 0; j < ss.size(); j++) {
				if(ss[j] == t[j % a])continue;
				else {
					break;
				}
			}
			if(j == ss.size()) {
				cout << ss << endl;
				return;
			}
		}
		i++;
	}
	cout << -1 << endl;
}
int main () {
	fast();
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}


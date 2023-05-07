#include<bits/stdc++.h>
/*#include<unordered_map>
#include<unordered_set>*/
 
using namespace std;
void ios_b() {
	ios_base :: sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
void f() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}
#define debug(x) cerr << (#x) << " = " << x << endl;
#define sz(x) (int)(x).size()
typedef long long ll;
typedef unsigned long long ull;
ll gcd(ll a, ll b) { return (!b) ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a / gcd(a, b)) * b); }
const double PI = acos(-1.0);
const double EPS = 1e-10;
const ll MOD = ll(1e9 + 7), INF = ll(1e9 + 7);
int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, -1, 1, 1, -1};
void solve() {
	int n;
	cin >> n;
	map<string, int> mp;
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		string s; cin >> s;
		if(!mp[s]) {
			mp[s] = a;
		}
		else {
			mp[s] = min(mp[s], a);
		}
	}

	if(mp["11"] &&  mp["10"] && mp["01"]) {
		cout << min(mp["11"], mp["10"] + mp["01"]) << endl;
	}
	else if(!mp["11"] &&  mp["10"] && mp["01"]) {
		cout << mp["10"] + mp["01"] << endl;
	}
	else if (mp["11"]){
		cout << mp["11"] << endl;
	}
	else {
		cout << -1 << endl;
	}
}
int main () {
	ios_b();
	f();
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
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
#define sz(x) (int)(x).size()
#define all(s) (s).begin(), (s).end()
#define rall(s) (s).rbegin(), (s).rend()
#define debug(x) cerr << (#x) << " = " << x << endl;

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
  int n, k, x;
  cin >> n >> k >> x;
  if((k == x && k == 1) || (n & 1 && k == 2 && x == 1)) {
  	cout << "NO" << endl;
  }
  else {
  	cout << "YES" << endl;
  	if(x != 1) {
  	  cout << n << endl;
      for(int i = 0; i < n; i++) {
  	    cout << 1 << " \n"[i == n - 1];
  	  }
  	}
  	else {
  	  cout << n / 2 << endl;
  	  if(n & 1) {
  	  	for(int i = 0; i < n / 2 - 1; i++) {
  	  	  cout << 2 << " ";
  	  	}
  	  	cout << 3 << endl;
  	  }
  	  else {
  	  	for(int i = 0; i < n / 2; i++) {
  	  	  cout << 2 << " \n"[i == n / 2 - 1];
  	  	}
  	  }
  	}
  }
}
int main () {
  #ifndef ONLINE_JUDGE
	auto begin = std::chrono::high_resolution_clock::now();
  #endif
  ios_b();
  f();
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  #ifndef ONLINE_JUDGE
	auto end = std::chrono::high_resolution_clock::now();
	cerr << setprecision(4) << fixed;
	cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
  #endif
  return 0;
}
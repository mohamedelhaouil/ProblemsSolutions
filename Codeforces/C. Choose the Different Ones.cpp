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
  int n, m, k;
  cin >> n >> m >> k;
  map<int, int> mp;
  set<int> st1, st2;
  for(int i = 0; i < n; i++) {
    int a; cin >> a;
    if(!st1.count(a) && a <= k) {
      st1.insert(a);
    }
    mp[a]++;
  }
  for(int i = 0; i < m; i++) {
    int b; cin >> b;
    if(!st2.count(b) && b <= k) {
      st2.insert(b);
    }
    mp[b]++;
  }
  bool ok = true;
  for(int i = 1; i <= k; i++) {
    ok &= mp[i] != 0;
  }
  ok &= st1.size() >= k / 2;
  ok &= st2.size() >= k / 2;
  cout << (ok ? "YES" : "NO") <<endl;
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


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
  int n;
  cin >> n;
  vector<int> v(n + 1);
  for(int i = 1 ; i <= n; i++) {
    cin >> v[i];
  }
  int m = 0;
  while((1 << m) <= n) {
    while(v[1 << m] > v[(1 << m) + 1]) {
      for(int i = 1; i <= (1 << m); i++) {
        v[i]--;
      }
    }
    m++;
  }
  bool ok = true;
  for(int i = 2 ; i <= n; i++) {
    if(v[i] < v[i - 1]) {
      ok = false;
      break;
    }
  }
  if(ok) cout << "YES" << endl;
  else cout << "NO" << endl;
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

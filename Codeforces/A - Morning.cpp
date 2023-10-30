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
  string s;
  cin >> s;
  int ans;
  if(s[0] == '0'){
    ans = 10;
  }
  else {
    ans = s[0] - '1' + 1;
  }
  for(int i = 1; i < sz(s); i++) {
    int a, b;
    if(s[i] == '0') {
      a = 9;
    }
    else {
      a = s[i] - '1';
    }
    if(s[i - 1] == '0') {
      b = 9;
    }
    else {
      b = s[i - 1] - '1';
    }
    ans += abs(a - b) + 1;
  }
  cout << ans << endl;
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
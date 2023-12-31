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
  string s[3];
  cin >> s[0] >> s[1] >> s[2];
  for(int i = 0; i < 3; i++) {
    if(s[i][0] == '?') {
      char a = min(s[i][1], s[i][2]);
      char b = max(s[i][1], s[i][2]);
      if(a != 'A') {
        cout << 'A' << endl;
      }
      else if(b != 'C') {
        cout << 'C' << endl;
      }
      else cout << 'B' << endl;
    }
    if(s[i][1] == '?') {
      char a = min(s[i][0], s[i][2]);
      char b = max(s[i][0], s[i][2]);
      if(a != 'A') {
        cout << 'A' << endl;
      }
      else if(b != 'C') {
        cout << 'C' << endl;
      }
      else cout << 'B' << endl;
    }
    if(s[i][2] == '?') {
      char a = min(s[i][0], s[i][1]);
      char b = max(s[i][0], s[i][1]);
      if(a != 'A') {
        cout << 'A' << endl;
      }
      else if(b != 'C') {
        cout << 'C' << endl;
      }
      else cout << 'B' << endl;
    }
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
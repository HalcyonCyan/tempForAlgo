#include <time.h>

#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <istream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <ratio>
#include <set>
#include <stack>
#include <string>
#include <type_traits>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

#define mset(t, x) memset(t, x, sizeof(t))
#define m0s(t) memset(t, 0, sizeof(t))
#define tt(t) while (t--)
#define ll long long
#define ull unsigned long long
#define db double
#define rep(i, a, b) for (ll i = (a); i <= (b); ++i)
#define rrep(i, a, b) for (ll i = (a); i >= (b); --i)
#define ls (x << 1)
#define rs (x << 1 | 1)
#define up(a, k) upper_bound(a.begin(), a.end(), k)
#define low(a, k) lower_bound(a.begin(), a.end(), k)
#define psh(a) push_back(a)
#define pop pop_back()
#define seed srand(time(NULL));
// #define endl          '\n'
#define quick                  \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);
const int infi = 0x3f'3f'3f'3f;
ll const infl = 0x3f'3f'3f'3f'3f'3f'3f'3f;
db const eps = 1e-9;
double const PI = acos(-1.0);

int read() {
  int w = 1, q = 0;
  char ch = ' ';
  while (ch != '-' && (ch < '0' || ch > '9')) {
    ch = getchar();
  }
  if (ch == '-') {
    w = -1, ch = getchar();
  }
  while (ch >= '0' && ch <= '9') {
    q = q * 10 + ch - '0', ch = getchar();
  }
  return w * q;
}
void reada(ll a[], ll n, ll st = 1) {
  rep(i, 1, n) { cin >> a[i]; }
}
void printa(ll a[], ll n, ll st = 1) {
  rep(i, st, n) { cout << a[i] << " "; }
  cout << endl;
}
void printv(vector<ll> vec) {
  std::for_each(vec.begin(), vec.end(),
                [](int element) { std::cout << element << " "; });
  std::cout << endl;
}

ll min_a(ll const a[], int n) {
  ll ans = (ll)4e18;
  for (int i = 1; i <= n; i++) {
    ans = min(ans, a[i]);
  }
  return ans;
}

// 2) 数组最大值
ll max_a(ll const a[], int n) {
  ll ans = (ll)-4e18;
  for (int i = 1; i <= n; i++) {
    ans = max(ans, a[i]);
  }
  return ans;
}

// 3) vector 最小值
ll min_v(vector<ll> const& v) {
  ll ans = (ll)4e18;
  for (auto x : v) {
    ans = min(ans, x);
  }
  return ans;
}

// 4) vector 最大值
ll max_v(vector<ll> const& v) {
  ll ans = (ll)-4e18;
  for (auto x : v) {
    ans = max(ans, x);
  }
  return ans;
}
ll T = 1;
// ll m, n, q, p, op, goal;
bool flag;
ll ans;
ll const N = 1e6 + 9;
ll const mo = 998244353;  // 记得检查是不是这个数
// ll a,b,c,d;
// ll a[N], b[N];
// ll a,b,c,d;
// ll s[4 * N];  //为了奇妙数据结构
ll dp[N];
vector<ll> vec;
string st;
short sh[N];
// short sh2[N][N];   //需要再加，会爆
// ll aa[N][N];
// bool  vi[N][N];
int main() {
  quick;  // 三问：开freopen，写N，定义的变量
  // cin>>T;

  tt(T) {}
}

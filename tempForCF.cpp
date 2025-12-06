#include <time.h>

#include <algorithm>
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
#define push(a) push_back(a)
#define pop pop_back()
#define seed srand(time(NULL));
#define endl '\n'
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

inline ll mymax(ll a, ll b) {
  return b & ((a - b) >> 63) | a & (~(a - b) >> 63);
}

ll T = 1;
ll m, n, goal;
bool flag;
ll ans;
ll const N = 1;
ll const mo = 998244353;  // 记得检查是不是这个数
ll a[N], b[N];
ll s[4 * N];  // 为了奇妙数据结构
ll dp[N];
ll aa[N][N];
short sh1[N];
// short sh2[N][N];   需要再加，会爆
// bool  vi[N][N]
int main() {
  tt(T) {}
}

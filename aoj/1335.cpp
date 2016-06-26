#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<vvi> vvvi;

int main (void) {
  int n, k, s;
  while (cin >> n >> k >> s, n) {
    int ans = 0;
    REP (i, 1 << n) {
      if (__builtin_popcount(i) != k) continue;
      int a = 0;
      REP (j, n) {
        if (i & (1 << j)) a += j + 1;
      }
      if (a == s) {
        // REP (j, n) {
        //   if (i & (1 << j)) cout << j + 1 << " ";
        // }
        // cout << endl;
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}

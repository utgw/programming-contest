#include <bits/stdc++.h>
#define FOR(i,m,n) for (int i = (m); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(), (x).end()
using namespace std;
const int inf = INT_MAX / 3;

int main(void){
  int n;
  while (cin >> n, n) {
    vector<int> a(n);
    int ans = inf;
    REP(i,n) cin >> a[i];
    REP(i,n) FOR(j,i+1,n) {
      ans = min(ans, abs(a[i] - a[j]));
    }
    cout << ans << endl;
  }
  return 0;
}

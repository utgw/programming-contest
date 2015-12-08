#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(), (x).end()
using namespace std;
const int inf = 1000000000;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  REP(i,n) cin >> a[i];
  vector<int> dp(n, inf);
  dp[0] = a[0];
  FOR(i,1,n)
    *lower_bound(ALL(dp), a[i]) = a[i];
  cout << distance(dp.begin(), find(ALL(dp), inf)) << endl;
  return 0;
}

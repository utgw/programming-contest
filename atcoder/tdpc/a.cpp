#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

int main (void) {
  int N;
  cin >> N;
  vector<int> p(N);
  int pt_max = 0;
  REP (i, N) {
    cin >> p[i];
    pt_max += p[i];
  }
  sort(ALL(p));
  vector<vector<int>> dp(N + 1, vector<int>(pt_max + 1));
  REP (i, N) {
    REP (j, pt_max + 1) {
      if (j < p[i]) dp[i + 1][j] = dp[i][j];
      else dp[i + 1][j] = max(dp[i][j], dp[i][j - p[i]] + p[i]);
    }
  }
  set<int> s;
  REP (i, pt_max + 1) s.insert(dp[N][i]);
  cout << s.size() << endl;
  return 0;
}

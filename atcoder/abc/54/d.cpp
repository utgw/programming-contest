#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define REP(i, n) FOR(i, 0, n)
using namespace std;

int main (void) {
  int N, Ma, Mb;
  cin >> N >> Ma >> Mb;
  vector<int> a(N), b(N), c(N);
  REP (i, N) {
    cin >> a[i] >> b[i] >> c[i];
  }
  vector<vector<vector<int>>> dp(41, vector<vector<int>>(401, vector<int>(401, 1e9)));

  REP (i, N) {
    dp[i][a[i]][b[i]] = c[i];
  }
  REP (i, N) REP (j, 400), REP (k, 400) {
    dp[i + 1][j][k] = min(dp[i][j][k], dp[i][j - a[i]][k - b[i]] + c[i]);
  }
  int ans = 1e9;
  FOR (k, 1, 801) {
    if (Ma * k <= 800 && Mb * k <= 800) {
      if (dp[Ma * k][Mb * k] != 1e9) {
        ans = min(ans, dp[Ma * k][Mb * k]);
      }
    }
  }
  if (ans == 1e9) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}

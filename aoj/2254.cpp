#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define REP(i, n) FOR (i, 0, n)
#define ALL(x) (x).begin(), (x).end()
using namespace std;
const int inf = INT_MAX / 3;

int main (void) {
  int N;
  while (cin >> N, N) {
    vector<vector<int>> t(N, vector<int>(N + 1));
    REP (i, N) REP (j, N + 1)
      cin >> t[i][j];
    int dest = (1 << N);
    vector<int> dp(dest + 2, inf);
    dp[0] = 0;
    REP (i, dest) {
      if (dp[i] == inf)
        continue;
      REP (j, N) {
        if (i & (1 << j))
          continue;
        int cost = t[j][0];
        REP (k, N) {
          if (i & (1 << k))
            cost = min(cost, t[j][k + 1]);
        }
        int next = i | (1 << j);
        dp[next] = min(dp[next], dp[i] + cost);
      }
    }
    cout << dp[dest - 1] << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) begin(x), end(x)
using LL = long long int;
using namespace std;
const LL MOD = 1e9 + 7;

int main (void) {
  int N;
  cin >> N;
  vector<LL> T(N), A(N);
  REP (i, N)
    cin >> T[i];
  REP (i, N)
    cin >> A[i];

  // mujun
  if (T[N - 1] != A[0]) {
    cout << 0 << endl;
    return 0;
  }

  LL ans = 1;
  FOR (i, 1, N - 1) {
    if (T[i] == T[i - 1] && A[i] == A[i + 1]) {
      ans = (ans * (min(T[i], A[i]))) % MOD;
    }
    if (T[i] > T[i - 1] && T[i] > A[i]) {
      // cout << "index: " << i << endl;
      cout << 0 << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}

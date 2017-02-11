#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define REP(i, n) FOR(i, 0, n)
using namespace std;

int main (void) {
  int N, M;
  cin >> N >> M;

  vector<string> a(N), b(M);
  REP (i, N)
    cin >> a[i];
  REP (i, M)
    cin >> b[i];

  REP (i, N) REP (j, N) {
    if (i + M > N || j + M > N) continue;
    bool ok = true;
    REP (k, M) REP (l, M) {
      ok = ok && a[i+k][j+l] == b[k][l];
    }
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}

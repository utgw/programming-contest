#include <bits/stdc++.h>
#define FOR(i, m, n) for(int i = (m); i < (n); i++)
#define REP(i, n) FOR(i, 0, n)
using namespace std;

int main (void) {
  int c[3][3];
  int s = 0;
  REP(i, 3) REP(j, 3) {
    int in;
    cin >> in;
    s += in;
    c[i][j] = in;
  }
  // check sum mod
  if (s % 3 != 0)
    goto fail;

  FOR(i, 1, 3) {
    if (!(c[i][0] - c[i - 1][0] == c[i][1] - c[i - 1][1] && c[i][1] - c[i - 1][1] == c[i][2] - c[i - 1][2])) goto fail;
  }

  cout << "Yes" << endl;
  return 0;
fail:
  cout << "No" << endl;
  return 0;
}

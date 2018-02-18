#include <bits/stdc++.h>
#define FOR(i, m, n) for(int i = (m); i < (n); i++)
#define REP(i, n) FOR(i, 0, n)
using namespace std;

int main (void) {
  int n;
  cin >> n;
  int a;
  cin >> a;
  n %= 500;
  cout << (n <= a ? "Yes" : "No") << endl;
  return 0;
}

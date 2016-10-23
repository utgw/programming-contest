#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) begin(x), end(x)
using LL = long long int;
using namespace std;

int main (void) {
  string s;
  cin >> s;
  int a = 0;
  REP(i, s.size()) {
    if(a == 0 && s[i] == 'C')a++;
    else if(a == 1 && s[i] == 'F')a++;
  }
  if(a == 2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}

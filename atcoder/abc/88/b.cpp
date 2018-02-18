#include <bits/stdc++.h>
#define FOR(i, m, n) for(int i = (m); i < (n); i++)
#define REP(i, n) FOR(i, 0, n)
using namespace std;

int main (void) {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n)
    cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());
  int alice = 0, bob = 0;
  bool alice_turn = true;
  REP(i, n) {
    if (alice_turn)
      alice += a[i];
    else
      bob += a[i];
    alice_turn = !alice_turn;
  }
  cout << alice - bob << endl;
  return 0;
}

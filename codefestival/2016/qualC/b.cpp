#include <bits/stdc++.h>
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) begin(x), end(x)
using LL = long long int;
using namespace std;

int main (void) {
  int K, T;
  cin >> K >> T;
  vector<int> a(T);
  REP(i, T)
    cin >> a[i];
  sort(ALL(a), greater<int>());
  int left = 0, right = T - 1;
  while (left < right) {
    // REP(i, T)
    //   cerr << a[i] << " ";
    // cerr << endl;
    if (a[left] - a[right] > 0) {
      a[left] -= a[right];
      a[right] = 0;
      right--;
    } else {
      a[right] -= a[left];
      a[left] = 0;
      left++;
    }
  }
  // REP(i, T)
  //   cerr << a[i] << " ";
  // cerr << endl;
  // cerr << left << endl;
  cout << max(a[left] - 1, 0) << endl;
  return 0;
}

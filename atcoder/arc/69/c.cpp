#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main (void) {
  ll N, M;
  cin >> N >> M;
  ll ans = 0;
  if (M >= 2 * N) {
    ans = N;
    M -= 2 * N;
    ans += M / 4;
  } else {
    ans = M / 2;
  }
  cout << ans << endl;
  return 0;
}

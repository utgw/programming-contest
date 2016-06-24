#include <bits/stdc++.h>
#define FOR(i,m,n) for (int i = (m); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(), (x).end()
using namespace std;
const int maxa = 7368795;

bool eratos[maxa];

int main(void){
  int m, n;
  while (cin >> m >> n, m) {
    memset(eratos, true, sizeof eratos);
    FOR(i, m, m*2) eratos[i] = true;
    FOR(i, m, maxa) {
      if (!eratos[i]) continue;
      eratos[i] = true;
      for(int j = i + i; j < maxa; j += i) {
        eratos[j] = false;
      }
    }
    int cnt = 0;
    FOR(i, m, maxa) {
      if (eratos[i]) {
        // cout << "i=" << i << endl;
        if (cnt < n) {
          cnt++;
        } else {
          cout << i << endl;
          break;
        }
      }
    }
  }
  return 0;
}

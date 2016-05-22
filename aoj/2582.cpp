#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

int main (void) {
  int n;
  while(cin >> n, n){
    vector<string> f(n);
    REP (i, n)
      cin >> f[i];
    // T: up F:down
    int ans = 0;
    bool previous_state = false;
    for (int i = 0; i + 1 < n; i += 2) {
      if ((f[i] == "lu" && f[i+1] == "ru" && !previous_state) ||
          (f[i] == "ru" && f[i+1] == "lu" && !previous_state) ||
          (f[i] == "ld" && f[i+1] == "rd" && previous_state) ||
          (f[i] == "rd" && f[i+1] == "ld" && previous_state)
          ){
        ans++;
        previous_state = !previous_state;
      }
    }
    cout << ans << endl;
  }
  return 0;
}

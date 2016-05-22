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

int main(void){
  int n;
  while (cin >> n, n) {
    vector<set<int>> info(n);
    REP (i, n) {
      int k;
      cin >> k;
      REP (j, k) {
        int l;
        cin >> l;
        info[i].insert(l);
      }
    }
    set<int> info2;
    int k;
    cin >> k;
    REP (i, k) {
      int l;
      cin >> l;
      info2.insert(l);
    }
    int ans = -1;
    bool already = false;
    REP (i, n) {
      bool ok = info[i].size() >= info2.size();
      for (int a : info2) {
        ok = ok && info[i].find(a) != info[i].end();
      }
      if (ok) {
        if (already) {
          ans = -1;
        } else {
          ans = i + 1;
          already = true;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}

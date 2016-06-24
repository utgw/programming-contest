#include <bits/stdc++.h>
#define FOR(i,m,n) for (int i = (m); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(), (x).end()
using namespace std;

struct status {
  vector<int> block;
  int drop;
};

int main(void){
  int n;
  while (cin >> n, n) {
    vector<int> w(n);
    REP(i,n) cin >> w[i];
    vector<bool> droppable(n, false);
    REP(i,n) {
      if ((i < n && abs(w[i] - w[i+1]) <= 1) || (i > 0 && abs(w[i] - w[i-1]) <= 1)) {
        droppable[i] = true;
      }
    }
    REP(i, n) {
      cout << droppable[i] << " ";
    }
    cout << endl;
    priority_queue<int> q;
    REP(i,n) {
      if (!droppable[i]) {
        q.push(i);
      }
    }
    while (!q.empty()) {
      int a = q.top();
      q.pop();
      if (a > 0 && droppable[a - 1]) {
        int b = a - 1;
        while (b > 0) {
          if (droppable[b]) {
            if (abs(w[b] - w[a]) <= 1) {
              if (abs(w[b] - w[b + 1]) > 1 && abs(w[b - 1] - w[a + 1]) <= 1) {
                droppable[a] = true;
                droppable[a + 1] = true;
                break;
              }
            }
          } else {
            if (abs(w[b] - w[a]) <= 1) {
              droppable[b] = droppable[a] = true;
            }
            break;
          }
          cout << "left:" << b << "," << w[b] << endl;
          b--;
        }
      }
      if (a < n && !droppable[a]) {
        int b = a + 1;
        while (b < n) {
          if (droppable[b]) {
            if (abs(w[b] - w[a]) <= 1) {
              if (abs(w[b] - w[b - 1]) > 1 && abs(w[b + 1] - w[a - 1]) <= 1) {
                droppable[a] = true;
                droppable[a - 1] = true;
                break;
              }
            }
          } else {
            if (abs(w[b] - w[a]) <= 1) {
              droppable[b] = droppable[a] = true;
            }
            break;
          }
          cout << "right:" << b << "," << w[b] << endl;
          b++;
        }
      }
    }
    REP(i, n) {
      cout << droppable[i] << " ";
    }
    cout << endl;
    cout << count(ALL(droppable), true) << endl;
  }
  return 0;
}

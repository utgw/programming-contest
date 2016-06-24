#include <bits/stdc++.h>
#define FOR(i,m,n) for (int i = (m); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(), (x).end()
using namespace std;

int main(void){
  int n;
  while (cin >> n, n) {
    vector<string> c(n);
    REP(i,n) cin >> c[i];
    map<string, int> vote;
    vote["uooooo"] = 0;
    REP(i,n){
      string a = c[i];
      vote[a]++;
      vector<pair<int,string>> poe;
      for (auto& a : vote) {
        poe.push_back(make_pair(a.second, a.first));
      }
      sort(ALL(poe), greater<pair<int,string>>());
      // int m = (n % 2 == 0) ? n / 2 : n / 2 + 1;
      int rest = n - i - 1;
      if (poe[0].first > poe[1].first + rest) {
        cout << poe[0].second << " " << i + 1 << endl;
        goto next;
      }
    }
    cout << "TIE" << endl;
    next:
    continue;
  }
  return 0;
}

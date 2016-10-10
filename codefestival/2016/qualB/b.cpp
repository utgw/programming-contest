#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
const ll inf = INT_MAX;

int main(void){
  int N, A, B;
  cin >> N >> A >> B;
  string s;
  cin >> s;
  int passed_jp = 0, passed_other = 0;
  REP (i, s.size()) {
    if (s[i] == 'a'){
      if (passed_jp + passed_other < A + B) {
        cout << "Yes" << endl;
        passed_jp++;
      } else {
        cout << "No" << endl;
      }
    } else if (s[i] == 'b') {
      if (passed_jp + passed_other < A + B && passed_other < B) {
        cout << "Yes" << endl;
        passed_other++;
      } else {
        cout << "No" << endl;
      }
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}

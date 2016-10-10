#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
const ll inf = INT_MAX;

int main(void){
  const string correct = "CODEFESTIVAL2016";
  string in;
  cin >> in;
  int ans = 0;
  REP(i, in.size()) {
    if (in[i] != correct[i])
      ans++;
  }
  cout << ans << endl;
  return 0;
}

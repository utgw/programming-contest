#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

int main(void){
  int N; cin >> N;
  if(N == 1) cout << 1 << endl;
  else cout << (N + 6 * N) / 2 << endl;
  return 0;
}
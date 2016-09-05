#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;

int main(void){
  int N;
  cin >> N;
  vector<int> L(2*N);
  REP(i, 2*N) cin >> L[i];
  sort(ALL(L), greater<int>());
  int ans = 0;
  REP(i, N){
    ans += L[2*i+1];
  }
  cout << ans << endl;
  return 0;
}

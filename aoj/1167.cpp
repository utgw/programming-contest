#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
const int inf = 2147483647;
const double eps = 1e-8;

int main(){
  const int nmax = 1000000;
  int n;
  vector<int> a, b;
  // 10^6より小さい正三角形数・正四面体数を計算
  FOR(i,1,nmax){
    int c = i*(i+1)*(i+2)/6;
    if(c < nmax){
      a.push_back(c);
      if(c % 2 == 1)
        b.push_back(c);
    }else break;
  }
  vector<int> dpa(nmax+1,inf);
  vector<int> dpb(nmax+1,inf);
  dpa[0] = dpb[0] = 0;
  REP(i,nmax+1){
    REP(j,a.size()){
      if(i - a[j] >= 0) dpa[i] = min(dpa[i-a[j]]+1, dpa[i]);
      if(j < b.size() && i - b[j] >= 0) dpb[i] = min(dpb[i-b[j]]+1, dpb[i]);
    }
  }
  while(scanf("%d",&n),n != 0)
    printf("%d %d\n", dpa[n], dpb[n]);
  return 0;
}
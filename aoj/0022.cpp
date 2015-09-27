#include <stdio.h>
#include <algorithm>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(){
  const int inf = 2147483647;
  int n;
  while(scanf("%d",&n),n != 0){
    int S[5001];
    int res = -inf;
    S[0] = 0;
    FOR(i,1,n+1){
      scanf("%d",&S[i]);
      S[i] += S[i-1];
    }
    REP(a,n)
      FOR(b,a+1,n+1)
        res = max(res, S[b] - S[a]);
    printf("%d\n",res);
  }
  return 0;
}
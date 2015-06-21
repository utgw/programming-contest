#include <cstdio>
#include <algorithm>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(){
  const int MAXW = 1000;
  const int MAXN = 1000;
  int cs = 1;
  while(1){
    int W,n;
    int res,weight;
    int w[MAXW], v[MAXN];
    int dp[MAXW+1][MAXN+1];
    scanf("%d\n",&W);
    if(W==0) break;
    scanf("%d\n",&n);
    REP(i,n) scanf("%d,%d\n",&v[i],&w[i]);
    REP(j,W+1) dp[n][j]=0;
    for(int i=n-1;i>=0;i--){
      REP(j,W+1){
        if(j < w[i]) dp[i][j]=dp[i+1][j];
        else dp[i][j]=max(dp[i+1][j],dp[i+1][j-w[i]]+v[i]);
      }
    }
    res = dp[0][W];
    for(weight=W;weight>0;weight--){
      if(res > dp[0][weight]) break;
    }
    printf("Case %d:\n",cs);
    printf("%d\n%d\n",res,weight+1);
    cs++;
  }
  return 0;
}

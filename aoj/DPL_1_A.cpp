#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

const int inf = 2147483647;

int ccp(int coins[], int n, int price){
  vector<int> dp(price+1,inf);
  dp[0] = 0;
  REP(i,price+1)
    REP(j,n)
      if(i - coins[j] >= 0)
        dp[i] = min(dp[i-coins[j]]+1, dp[i]);
  return dp[price];
}

int main(){
  int n, m;
  int c[20];
  scanf("%d%d",&n,&m);
  REP(i,m) scanf("%d",&c[i]);
  printf("%d\n",ccp(c,m,n));
  return 0;
}
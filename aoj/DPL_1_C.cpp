#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
const int MAX_NP = 100;
const int MAX_W = 10000;

int main(){
  int n,W;
  int w[MAX_NP];
  int v[MAX_NP];
  int dp[MAX_NP+1][MAX_W+1];
  cin >> n >> W;
  REP(i,n)cin >> v[i] >> w[i];
  REP(i,n){
    REP(j,W+1){
      if(j < w[i])
        dp[i+1][j] = dp[i][j];
      else
        dp[i+1][j] = max(dp[i][j], dp[i+1][j-w[i]]+v[i]);
    }
  }
  cout << dp[n][W] << endl;
  return 0;
}

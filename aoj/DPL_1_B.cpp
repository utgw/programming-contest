#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
const int MAX_NP = 100;
const int MAX_W = 10000;
int n,W;
int w[MAX_NP];
int v[MAX_NP];
int dp[MAX_NP+1][MAX_W+1];

int dfs(int i,int j){
  int res;
  if(dp[i][j]!=-1) return dp[i][j];
  if(i==n) res = 0;
  else if(j<w[i]) res = dfs(i+1,j);
  else res = max(dfs(i+1,j),dfs(i+1,j-w[i])+v[i]);
  return dp[i][j] = res;
}

int main(){
  memset(dp,-1,sizeof(dp));
  cin >> n >> W;
  REP(i,n)cin >> v[i] >> w[i];
  cout << dfs(0,W) << endl;
}

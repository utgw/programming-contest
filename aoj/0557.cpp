#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

bool ok(int n){
  return n >= 0 && n <= 20;
}

int main(void){
  int n;cin>>n;
  vector<ll> a(n);
  REP(i,n)cin>>a[i];
  ll dp[101][21];
  memset(dp,0,sizeof dp);
  dp[1][a[0]]=1;
  FOR(i,2,n+1)REP(j,21){
    if(ok(j-a[i-1])&&dp[i-1][j-a[i-1]]>0&&ok(j+a[i-1])&&dp[i-1][j+a[i-1]]>0)
      dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j+a[i-1]];
    else if(ok(j-a[i-1])&&dp[i-1][j-a[i-1]]>0)
      dp[i][j]=dp[i-1][j-a[i-1]];
    else if(ok(j+a[i-1])&&dp[i-1][j+a[i-1]]>0)
      dp[i][j]=dp[i-1][j+a[i-1]];
  }
  cout<<dp[n][0]<<endl;
  return 0;
}

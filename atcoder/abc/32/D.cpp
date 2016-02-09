//TODO
#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
ll dp[201][600001];

int main(void){
  int N,W;cin>>N>>W;
  int v[201],w[201];
  REP(i,N)cin>>v[i]>>w[i];
  REP(i,N)REP(j,W+1){
    if(j<w[i])dp[i+1][j]=dp[i][j];
    else dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
  }
  cout<<dp[N][W]<<endl;
  return 0;
}

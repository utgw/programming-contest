#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int dp[10000000];

int main(void){
  int g;
  const int w[6]={200,300,500,1000,1200,1500};
  const int c[6]={380,550,850,380*5*80/100,550*4*85/100,850*3*88/100};
  memset(dp,100000,sizeof dp);
  dp[0]=0;
  REP(i,5000)REP(j,6){
    dp[i+w[j]]=min(dp[i],dp[i+w[j]]+c[j]);
  }
  // REP(i,10000000)cout<<dp[i]<<endl;
  while(cin>>g,g){
    cout<<dp[g]<<endl;
  }
  return 0;
}

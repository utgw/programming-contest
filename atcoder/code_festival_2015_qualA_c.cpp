#include <stdio.h>
#include <algorithm>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
typedef long long ll;
using namespace std;
const int MAX_N = 10000;
const ll INF = 2000000000;
int N; ll T;
int homework[MAX_N][2];

ll dfs(int n, ll t){
  ll res = 0;
  if(n == N){
    if(t > T) return INF;
    return 0;
  }
  res += min(dfs(n+1,t+homework[n][0]), dfs(n+1,t+homework[n][1])+1);
  return res;
}

ll calculate(){
  ll s = 0;
  REP(i,N){
    s += homework[i][1];
    if(s > T) return -1;
  }
  return dfs(0,0);
}

int main(){
  scanf("%d%lld",&N,&T);
  REP(i,N)
    scanf("%d%d",&homework[i][0],&homework[i][1]);
  printf("%lld\n", calculate());
  return 0;
}
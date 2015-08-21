#include <cstdio>
#include <algorithm>
#include <cstring>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,m) FOR(i,0,m)

const int maxdata = 100;
int data[maxdata][maxdata];
long memo[maxdata][maxdata];

long dfs(int depth, int x){
  if(memo[depth][x] != -1) return memo[depth][x];
  int res;
  if(depth == maxdata)
    res = 0;
  else
    res = data[depth][x] + std::max(dfs(depth+1,x), dfs(depth+1,x+1));
  return memo[depth][x] = res;
}

int main(){
  memset(data,0,sizeof(data));
  memset(memo,-1,sizeof(memo));
  REP(i,maxdata) REP(j,i+1) scanf("%02d",&data[i][j]);
  printf("%ld\n",dfs(0,0));
  return 0;
}

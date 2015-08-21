#include <cstdio>
#include <algorithm>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,m) FOR(i,0,m)

const int maxdata = 15;
int data[maxdata][maxdata];

int dfs(int depth, int x){
  int res;
  if(depth == maxdata)
    res = 0;
  else
    res = data[depth][x] + std::max(dfs(depth+1,x), dfs(depth+1,x+1));
  return res;
}

int main(){
  REP(i,maxdata) REP(j,i+1) scanf("%02d",&data[i][j]);
  printf("%d\n",dfs(0,0));
  return 0;
}

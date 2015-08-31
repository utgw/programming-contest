#include <cstdio>
#include <algorithm>
#define REP(i,n) for(int i=0;i<(int)(n);i++)

int main(){
  const int maxdata = 100;
  int data[maxdata][maxdata];
  int res[maxdata][maxdata];
  REP(i,maxdata) REP(j,i+1) scanf("%02d",&data[i][j]);
  REP(i,maxdata) res[maxdata-1][i] = data[maxdata-1][i];
  for(int y=maxdata-2;y>=0;y--){
    for(int x=0;x<=y;x++){
      res[y][x] = data[y][x] + std::max(res[y+1][x],res[y+1][x+1]);
    }
  }
  printf("%d\n",res[0][0]);
  return 0;
}

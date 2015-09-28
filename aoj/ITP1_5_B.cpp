#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(){
  int H,W;
  while(scanf("%d%d",&H,&W),!(H==0&&W==0)){
    REP(i,H){
      REP(j,W)
        printf("%c",i>0&&i<H-1&&j>0&&j<W-1 ? '.' : '#');
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
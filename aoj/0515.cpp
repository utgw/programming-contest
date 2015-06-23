#include <cstdio>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
int main(){
  while(1){
    int a,b,c,d,n;
    int way[16][16]={{0}};
    bool flg=false;
    scanf("%d%d\n",&a,&b);
    if(a==0&&b==0)break;
    scanf("%d\n",&n);
    REP(i,n){
      scanf("%d%d\n",&c,&d);
      way[d-1][c-1]=-1;
    }
    REP(i,a){
      if(way[0][i]==-1||flg){
        way[0][i]=0;
        flg=true;
      }else way[0][i]=1;
    }
    flg=false;
    REP(i,b){
      if(way[i][0]==-1||flg){
        way[i][0]=0;
        flg=true;
      }else way[i][0]=1;
    }
    REP(y,b-1){
      REP(x,a-1){
        if(way[y+1][x+1]==-1)way[y+1][x+1]=0;
        else way[y+1][x+1]=way[y][x+1]+way[y+1][x];
      }
    }
    printf("%d\n",way[b-1][a-1]);
  }
  return 0;
}

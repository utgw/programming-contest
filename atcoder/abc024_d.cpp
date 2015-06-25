//TODO
#include <cstdio>
int main(){
  const int d=1000000007;
  const int maxw=1000;
  int a,b,c,i,j,x,y;
  x=y=maxw;
  int masu[maxw][maxw];
  for(i=0;i<maxw;i++)masu[i][0]=masu[0][i]=1;
  for(i=1;i<maxw;i++){
    for(j=1;j<maxw;j++)masu[i][j]=(masu[i-1][j]+masu[i][j-1])%d;
  }
  scanf("%d%d%d\n",&a,&b,&c);
  for(i=0;i<maxw;i++){
    for(j=0;j<maxw;j++){
      if(a==masu[i][j]&&j<=x||i<=y){
        x=j;
        y=i;
      }
    }
  }
  printf("%d %d\n",x,y);
  return 0;
}

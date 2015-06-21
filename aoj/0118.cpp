//TODO
#include <cstdio>
#define REP(i,n) for(int i=0,i<n;i++)
const int vec[3][2] = {{1,0},{1,1},{0,1}};

int h,w;
char mode=-1;
char str[100][100];
bool checked[100][100];

int solve(int x,int y){
  if(mode==-1){
    mode = str[y][x];
  }
}

int main(){
  while(1){
    scanf("%d%d\n",&h,&w);
    if(h==0) break;
    REP(i,h) scanf("%s\n",str[i]);
    printf("%d\n",solve(0,0));
    memset(checked,false,sizeof(checked));
  }
  return 0;
}

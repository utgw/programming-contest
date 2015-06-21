//TODO
#include <cstdio>
#include <vector>
#include <cstring>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

char field[100][100];
bool visited[100][100];
int w,h;

void paint(int x,int y,char fruit){
  const int vec[4][2] = {{1,0},{0,1},{0,-1},{-1,0}};
  visited[y][x] = true;
  REP(i,4){
    if((y+vec[i][0]>=0)
    &&(y+vec[i][0]<h)
    &&(x+vec[i][1]>=0)
    &&(x+vec[i][1]<w)
    ){
      if((field[y+vec[i][0]][x+vec[i][1]]==fruit)&&(!visited[y+vec[i][0]][x+vec[i][1]]))
        paint(x+vec[i][1],y+vec[i][0],fruit);
    }
  }
  return;
}

int main(){
  while(true){
    int cnt=0;
    scanf("%d%d\n",&h,&w);
    if(w==0) break;

    REP(i,h){
      char str[100];
      gets(str);
      for(int j=0;str[j]!='\0';j++) field[i][j]=str[j];
    }
    // solve
    REP(y,h){
      REP(x,w){
        if(visited[y][x]) continue;
        cnt++;
        paint(x,y,field[y][x]);
      }
    }
    // end
    printf("%d\n",cnt);
    memset(visited,false,sizeof(visited));
  }
  return 0;
}

#include <cstdio>
#include <cstring>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

bool movable[12][12];
bool visited[12][12];

void paint(int x, int y){
  const int vec[4][2] = {{1,0},{0,1},{0,-1},{-1,0}};
  visited[y][x] = true;
  REP(i,4){
    if((y+vec[i][0]>=0)
    &&(y+vec[i][0]<12)
    &&(x+vec[i][1]>=0)
    &&(x+vec[i][1]<12)
    ){
      if((movable[y+vec[i][0]][x+vec[i][1]])&&(!visited[y+vec[i][0]][x+vec[i][1]])) paint(x+vec[i][1],y+vec[i][0]);
    }
  }
  return;
}

int main(){
  while(true){
    char str[12];
    int cnt=0;
    REP(i,12){
      gets(str);
      REP(j,12) movable[i][j] = str[j] == '1';
    }
    memset(visited,false,sizeof(visited));
    // solve
    REP(y,12){
      REP(x,12){
        if(visited[y][x]) continue;
        if(movable[y][x]){
          cnt++;
          paint(x,y);
        }else
          visited[y][x] = true;
      }
    }
    // end
    printf("%d\n",cnt);
    if(gets(str)==NULL) break;
  }
  return 0;
}

#include <cstdio>
#include <vector>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

vector<vector<bool>> movable;
vector<vector<bool>> visited;
int w,h;
int cnt=0;

void paint(int x, int y){
  const int vec[8][2] = {{1,0},{1,1},{0,1},{0,-1},{1,-1},{-1,-1},{-1,0},{-1,1}};
  visited[y][x] = true;
  REP(i,8){
    if((y+vec[i][0]>=0)
    &&(y+vec[i][0]<h)
    &&(x+vec[i][1]>=0)
    &&(x+vec[i][1]<w)
    ){
      if((movable[y+vec[i][0]][x+vec[i][1]])&&(!visited[y+vec[i][0]][x+vec[i][1]])) paint(x+vec[i][1],y+vec[i][0]);
    }
  }
  return;
}

int main(){
  while(true){
    scanf("%d%d\n",&w,&h);
    if(w==0) break;

    REP(i,h){
      char str[200];
      gets(str);
      vector<bool> set;
      for(int i=0;str[i]!='\0';i++){
        switch(str[i]){
          case '1':
            set.push_back(true);
            break;
          case '0':
            set.push_back(false);
            break;
        }
      }
      movable.push_back(set);
    }
    REP(i,h) visited.push_back(vector<bool>(w,false));
    // solve
    REP(y,h){
      REP(x,w){
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
    cnt = 0;
    movable.erase(movable.begin(),movable.end());
    visited.erase(visited.begin(),visited.end());
  }
  return 0;
}

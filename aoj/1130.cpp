#include <iostream>
#include <vector>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

vector<vector<bool>> movable;
vector<vector<bool>> visited;
int w,h;

int solve(int x, int y){
  const int direction[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
  int result = 0;
  visited[y][x] = true;
  if(movable[y][x]){
    result++;
    REP(i,4){
      if((y+direction[i][0]>=0)
        &&(y+direction[i][0]<h)
        &&(x+direction[i][1]>=0)
        &&(x+direction[i][1]<w)
        &&(!visited[y+direction[i][0]][x+direction[i][1]])){
          result += solve(x+direction[i][1],y+direction[i][0]);
      }
    }
  }
  return result;
}

int main(){
  while(true){
    int sx, sy;
    cin >> w >> h;
    if(w==0) break;

    REP(i,h){
      string str;
      cin >> str;
      vector<bool> set;
      REP(j,w){
        set.push_back((str[j]=='.')||(str[j]=='@'));
        if(str[j]=='@'){
          sx = j;
          sy = i;
        }
      }
      movable.push_back(set);
    }
    REP(i,h) visited.push_back(vector<bool>(w,false));
    cout << solve(sx,sy) << endl;
    movable.erase(movable.begin(),movable.end());
    visited.erase(visited.begin(),visited.end());
  }
  return 0;
}

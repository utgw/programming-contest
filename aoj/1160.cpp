// TODO
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

vector<vector<bool>> movable;
vector<vector<bool>> visited;
int w,h;
int cnt=0;

void solve(int x, int y){
  const int direction[3][2] = {{1,1},{1,0},{0,1}}
  visited[y][x]=true;
  REP(i,3){
    if((y+direction[i][0]<h)
    &&(x+direction[i][1]<w)
    &&(!visited[y+direction[i][0]][x+direction[i][1]])){
      solve(x+direction[i][1],y+direction[i][0]);
    }
  }
}

vector<string> split(const string &str, char delim){
  istringstream iss(str); string tmp; vector<string> res;
  while(getline(iss, tmp, delim)) res.push_back(tmp);
  return res;
}

int main(){
  while(true){
    cin >> w >> h;
    if(w==0) break;

    REP(i,h){
      string str;
      cin >> str;
      vector<bool> set;
      for(string s : split(str,' ')) set.push_back(s=="1");
      movable.push_back(set);
    }
    REP(i,h) visited.push_back(vector<bool>(w,false));
    solve(0,0);
    cout << cnt << endl;
    cnt = 0;
    movable.erase(movable.begin(),movable.end());
    visited.erase(visited.begin(),visited.end());
  }
  return 0;
}

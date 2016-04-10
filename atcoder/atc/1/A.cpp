#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int dr[][2]={{-1,0},{0,-1},{1,0},{0,1}};

int main(void){
  char maze[501][501];
  int h,w;
  cin>>h>>w;
  pair<int,int> start,goal;
  REP(i,h)REP(j,w){
    cin>>maze[i][j];
    if(maze[i][j]=='s'){
      start=make_pair(i,j);
      maze[i][j]='.';
    }else if(maze[i][j]=='g'){
      goal=make_pair(i,j);
      maze[i][j]='.';
    }
  }
  // REP(i,h){
  //   REP(j,w)cout<<maze[i][j];
  //   cout<<endl;
  // }
  stack<pair<int,int>> st;
  st.push(start);
  while(!st.empty()){
    auto a=st.top();st.pop();
    int y=a.first,x=a.second;
    // cout<<y<<","<<x<<endl;
    if(y==goal.first&&x==goal.second){
      cout<<"Yes"<<endl;
      return 0;
    }
    maze[y][x]='#';
    REP(i,4){
      int ny=y+dr[i][0],nx=x+dr[i][1];
      if(ny>=0&&ny<h&&nx>=0&&nx<w&&maze[ny][nx]=='.'){
        maze[ny][nx]='#';
        st.push(make_pair(ny,nx));
      }
    }
  }
  cout<<"No"<<endl;
  return 0;
}

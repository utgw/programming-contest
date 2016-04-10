#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int dr[][2]={{-1,0},{0,1},{1,0},{0,-1}};

int main(void){
  char maze[51][51];
  int r,c;cin>>r>>c;
  int sy,sx,gy,gx;cin>>sy>>sx>>gy>>gx;
  sy--;sx--;gy--;gx--;
  REP(i,r)REP(j,c)cin>>maze[i][j];
  queue<tuple<int,int,int>> q;
  q.push(make_tuple(sx,sy,0));
  while(!q.empty()){
    auto a=q.front();q.pop();
    int y=get<0>(a),x=get<1>(a);
    // REP(i,r){
    //   REP(j,c)cout<<maze[i][j];
    //   cout<<endl;
    // }
    maze[y][x]='*';
    if(y==gy&&x==gx){
      cout<<get<2>(a)<<endl;
      break;
    }
    REP(i,4){
      int dy=y+dr[i][0],dx=x+dr[i][1];
      if(maze[dy][dx]=='.'){
        maze[dy][dx]='*';
        q.push(make_tuple(dy,dx,get<2>(a)+1));
      }
    }
  }
  return 0;
}

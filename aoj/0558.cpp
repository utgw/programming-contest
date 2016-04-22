#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
#define X second
#define Y first
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

char maze[1001][1001];
bool visited[1001][1001];

struct status {
  int y;
  int x;
  int sec;
};

int main(void){
  int h,w,n;cin>>h>>w>>n;
  pair<int,int> start;
  REP(i,h)REP(j,w){
    cin>>maze[i][j];
    if(maze[i][j]=='S')start=make_pair(i,j);
  }
  memset(visited,false,sizeof visited);
  queue<status> Q;
  Q.push({start.Y,start.X,0});
  int power=1;
  while(!Q.empty()){
    auto a=Q.front();Q.pop();
    int y=a.y,x=a.x,second=a.sec;
    if(maze[y][x]=='X')continue;
    visited[y][x]=true;
    // cout<<x<<","<<y<<","<<second<<endl;
    if(isdigit(maze[y][x])&&(int)(maze[y][x]-'0')-power==0){
      maze[y][x]='.';
      power++;
      while(!Q.empty())Q.pop();
      Q.push({y,x,second});
      memset(visited,false,sizeof visited);
      if(power==n+1){
        cout<<second<<endl;
        break;
      }
    }
    REP(i,4){
      int dx=x+di[i][0],dy=y+di[i][1];
      if(dx>=0&&dx<w&&dy>=0&&dy<h&&!visited[dy][dx]){
        // cout<<dx<<","<<dy<<" push"<<endl;
        visited[dy][dx]=true;
        Q.push({dy,dx,second+1});
      }
    }
  }
  return 0;
}

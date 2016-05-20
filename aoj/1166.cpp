#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
               // h,j,k,l
const int able[] = {2,3,5,7};
const int di[][2] = {{0,-1},{1,0},{-1,0},{0,1}};

int main(void){
  int w,h;
  while(cin>>w>>h,w){
    vector<vector<int>> maze(h,vector<int>(w,1));
    cin.ignore();
    REP(i,2*h-1){
      string s;
      getline(cin,s,'\n');
      REP(j,(int)s.size()){
        if(s[j]=='0'){
          if(i%2==0){
            maze[i/2][j/2]*=able[3];
            maze[i/2][j/2+1]*=able[0];
          }else{
            maze[i/2][j/2]*=able[1];
            maze[i/2+1][j/2]*=able[2];
          }
        }
      }
    }
    queue<tuple<int,int,int>> next;
    int ans=0;
    next.push(make_tuple(h-1,w-1,1));
    while(!next.empty()){
      auto poe=next.front();next.pop();
      int y,x,d;
      tie(y,x,d)=poe;
      if(y==0&&x==0){
        ans=d;
        break;
      }
      REP(i,4){
        int ny=y+di[i][0],nx=x+di[i][1];
        if(maze[y][x]%able[i]==0){
          maze[y][x]/=able[i];
          maze[ny][nx]/=able[i^3];
          next.push(make_tuple(ny,nx,d+1));
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

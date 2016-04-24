#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}};

struct status {
  int y;
  int x;
  int turn;
};

int main(void){
  int t,n;
  while(cin>>t>>n,t){
    char masu[64][64];
    memset(masu,'.',sizeof masu);
    REP(i,n){
      int x,y;cin>>x>>y;
      masu[x+32][y+32]='#';
    }
    int sx,sy;cin>>sx>>sy;
    queue<status> q;
    int ans=0;
    q.push({sx+32,sy+32,0});
    while(!q.empty()){
      auto a=q.front();q.pop();
      masu[a.y][a.x]='*';
      if(a.turn>t)continue;
      ans++;
      REP(i,6){
        int dx=a.x+di[i][0],dy=a.y+di[i][1];
        if(dx>=0&&dx<64&&dy>=0&&dy<64&&masu[dy][dx]=='.'){
          q.push({dy,dx,a.turn+1});
          masu[dy][dx]='*';
        }
      }
    }
    // REP(i,64){
    //   REP(j,64)cout<<masu[i][j];
    //   cout<<endl;
    // }
    cout<<ans<<endl;
  }
  return 0;
}

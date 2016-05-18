#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
// const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{-1,-1}};
const int di[][2] = {{0,1},{1,1},{1,0},{0,-1},{-1,-1},{-1,0}};

const int geta = 100;

int main(void){
  int t,n;
  while(cin>>t>>n,t){
    vector<vector<int>> masu(300, vector<int>(300));
    REP(i,n){
      int x,y;cin>>x>>y;
      masu[x+geta][y+geta]=1;
    }
    int sx,sy;cin>>sx>>sy;
    sx+=geta;
    sy+=geta;
    queue<tuple<int,int,int>> next;
    next.push(make_tuple(sx,sy,t));
    masu[sx][sy]=-1;
    int answer=0;
    while(!next.empty()){
      auto a=next.front();next.pop();
      int x,y,turn;
      tie(x,y,turn)=a;
      // cout<<turn<<endl;
      // cout<<x<<","<<y<<endl;
      answer++;
      REP(j,6){
        int nx=x+di[j][0],ny=y+di[j][1];
        if(masu[nx][ny]==0&&turn>0){
          next.push(make_tuple(nx,ny,turn-1));
          masu[nx][ny]=-1;
        }
      }
    }
    cout<<answer<<endl;
  }
  return 0;
}

#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

int main(void){
  const ll mod=1e9+7;
  int h,w;cin>>h>>w;
  vector<vector<int>> masu(h,vector<int>(w));
  REP(i,h)REP(j,w)cin>>masu[i][j];
  ll ans=0;
  REP(sy,h)REP(sx,w){
    stack<pair<int,int>> next;
    next.push(make_pair(sy,sx));
    while(!next.empty()){
      auto a=next.top();next.pop();
      int y=a.first,x=a.second;
      // cout<<y<<","<<x<<":"<<masu[y][x]<<endl;
      ans=(ans+1)%mod;
      REP(i,4){
        int dy=y+di[i][0],dx=x+di[i][1];
        if(dy>=0&&dy<h&&dx>=0&&dx<w&&masu[dy][dx]>masu[y][x]){
          next.push(make_pair(dy,dx));
        }
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}

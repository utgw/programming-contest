#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int dr[][2] = {{1,0},{0,1},{-1,0},{0,-1}};

int main(void){
  int w,h;cin>>w>>h;
  char masu[1024][1024];
  bool visited[1025][1024];
  memset(visited,false,sizeof visited);
  REP(i,h)REP(j,w)cin>>masu[i][j];
  int n;cin>>n;
  vector<pair<int,int>> poe(n);
  REP(i,n){
    int x,y;cin>>x>>y;
    poe[i]=make_pair(y,x);
  }
  int ans=inf;
  int x=0,y=0;
  REP(l,n+1){
    // REP(i,h){
    //   REP(j,w)cout<<masu[i][j];
    //   cout<<endl;
    // }
    // cout<<endl;
    queue<pair<int,int>> q;
    // cout<<x<<","<<y<<endl;
    q.push(make_pair(x,y));
    while(!q.empty()){
      auto a=q.front();q.pop();
      x=a.first;y=a.second;
      // cout<<x<<','<<y<<endl;
      if(visited[y][x])continue;
      visited[y][x]=true;
      if(masu[y][x]=='#')continue;
      if(masu[y][x]=='t'){
        ans=l;
        goto ok;
      }
      REP(i,4){
        int mx=x+dr[i][0],my=y+dr[i][1];
        if(mx>=0&&mx<w&&my>=0&&my<h){
          q.push(make_pair(mx,my));
        }
      }
    }
    if(l==n)break;
    masu[poe[l].first][poe[l].second]='.';
    if(visited[poe[l].first][poe[l].second]){
      y=poe[l].first;
      x=poe[l].second;
    }else x=y=0;
    memset(visited,false,sizeof visited);
  }
  ok:
  if(ans==inf)cout<<-1<<endl;
  else cout<<ans<<endl;
  return 0;
}

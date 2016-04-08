#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;

int main(void){
  int w,h;
  const int dh[][2] ={{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
  while(cin>>w>>h,w){
    bool data[52][52];
    bool visited[52][52];
    memset(visited,false,sizeof visited);
    REP(i,h)REP(j,w){
      int s;cin>>s;
      data[i][j]=s==1;
    }
    int ans=0;
    REP(i,h)REP(j,w){
      if(visited[i][j])continue;
      visited[i][j]=true;
      if(!data[i][j])continue;
      ans++;
      stack<pair<int,int>> Q;
      Q.push(make_pair(i,j));
      while(!Q.empty()){
        pair<int,int> now(Q.top());Q.pop();
        int y=now.first,x=now.second;
        visited[y][x]=true;
        REP(k,8){
          int nx=x+dh[k][0],ny=y+dh[k][1];
          if(nx>=0&&nx<w&&ny>=0&&ny<h&&!visited[ny][nx]&&data[ny][nx])
            Q.push(make_pair(ny,nx));
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

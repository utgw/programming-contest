// TODO
#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int sand[1024][1024];

int main(void){
  int h,w;cin>>h>>w;
  REP(i,h)REP(j,w){
    char a;cin>>a;
    if(a=='.')sand[i][j]=0;
    else sand[i][j]=(int)(a-'0');
  }
  int answer=0;
  while(1){
    // REP(i,h){
    //   REP(j,w)cout<<sand[i][j];
    //   cout<<endl;
    // }
    // cout<<endl;
    queue<pair<int,int>> q;
    FOR(y,1,h-1)FOR(x,1,w-1){
      int base=sand[y][x];
      if(base==0||base==9)continue;
      int b=0;
      FOR(dy,-1,2){
        FOR(dx,-1,2){
          if(dy==0&&dx==0)continue;
          if(sand[y+dy][x+dx]==0)b++;
          if(b>=base){
            q.push(make_pair(y,x));
            goto poe;
          }
        }
      }
      poe:
      continue;
    }
    if(q.empty())break;
    while(!q.empty()){
      auto a=q.front();q.pop();
      sand[a.first][a.second]=0;
    }
    answer++;
  }
  cout<<answer<<endl;
  return 0;
}

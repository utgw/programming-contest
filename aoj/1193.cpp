#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  int h;
  int ban[10][5];
  while(cin>>h,h){
    REP(i,h)REP(j,5)cin>>ban[i][j];
    int point=0;
    while(1){
      bool rensa=false;
      queue<tuple<int,int,int,int>> Q;
      REP(i,h)REP(j,3){
        if(ban[i][j]!=0&&ban[i][j]==ban[i][j+1]&&ban[i][j+1]==ban[i][j+2]){
          rensa=true;
          int right=j+2;
          FOR(k,right+1,5){
            if(ban[i][j]==ban[i][k])right=k;
            else break;
          }
          Q.push(make_tuple(i,j,right,ban[i][j]));
          break;
        }
      }
      if(rensa){
        while(!Q.empty()){
          auto e=Q.front();
          Q.pop();
          int left=get<1>(e),right=get<2>(e);
          int range=right-left+1;
          int a=get<3>(e)*range;
          int d=get<0>(e);
          point+=a;
          FOR(i,left,right+1)ban[d][i]=0;
        }
        REP(i,h)REP(j,5){
          int y=i;
          if(ban[y][j]==0){
            while(y>0){
              swap(ban[y][j],ban[y-1][j]);
              y--;
            }
          }
        }
        // REP(i,h){
        //   REP(j,5)cout<<ban[i][j]<<" ";
        //   cout<<endl;
        // }
        // cout<<endl;
        rensa=false;
      }else{
        cout<<point<<endl;
        break;
      }
    }
  }
  return 0;
}

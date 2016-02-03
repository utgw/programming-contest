#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(void){
  int N;
  while(cin>>N,N){
    bool jewel[21][21];
    memset(jewel,false,sizeof jewel);
    REP(i,N){
      int x,y;cin>>x>>y;
      jewel[x][y]=true;
    }
    int M;cin>>M;
    int nx=10,ny=10;
    REP(i,M){
      string d;int m;cin>>d>>m;
      if(d=="N"){
        REP(j,m){
          jewel[nx][ny]=false;
          ny++;
        }
      }else if(d=="E"){
        REP(j,m){
          jewel[nx][ny]=false;
          nx++;
        }
      }else if(d=="W"){
        REP(j,m){
          jewel[nx][ny]=false;
          nx--;
        }
      }else{
        REP(j,m){
          jewel[nx][ny]=false;
          ny--;
        }
      }
      jewel[nx][ny]=false;
    }
    bool ok=true;
    REP(i,21) REP(j,21)
      if(jewel[i][j])ok=false;
    if(ok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}

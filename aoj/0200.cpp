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
  int n,m;
  while(cin>>n>>m,n){
    vector<vector<ll>> dist(m,vector<ll>(m,inf));
    vector<vector<ll>> time(m,vector<ll>(m,inf));
    REP(i,n){
      int a,b;ll d,t;
      cin>>a>>b>>d>>t;
      dist[a-1][b-1]=dist[b-1][a-1]=d;
      time[a-1][b-1]=time[b-1][a-1]=t;
    }
    REP(k,m)REP(i,m)REP(j,m){
      dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
      time[i][j]=min(time[i][j],time[i][k]+time[k][j]);
    }
    int k;cin>>k;
    REP(i,k){
      int p,q,r;cin>>p>>q>>r;
      if(r==0)cout<<dist[p-1][q-1]<<endl;
      else cout<<time[p-1][q-1]<<endl;
    }
  }
  return 0;
}

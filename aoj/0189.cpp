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

struct edge {
  int to;
  int cost;
};

typedef vector<vector<edge>> graph;

int main(void){
  int e;
  while(cin>>e,e){
    vector<vector<ll>> dist(10,vector<ll>(10,inf));
    REP(i,e){
      int s,t,d;cin>>s>>t>>d;
      dist[s][t]=dist[t][s]=d;
    }
    vector<ll> allhoge(10,0);
    REP(k,10)REP(i,10)REP(j,10){
      dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
    }
    REP(r,10)REP(i,10){
      if(dist[i][r]!=inf&&r!=i)allhoge[r]+=dist[i][r];
    }
    int mini=0,mina=allhoge[0];
    FOR(i,1,10){
      if(allhoge[i]==0)continue;
      if(mina>allhoge[i]){
        mini=i;
        mina=allhoge[i];
      }
    }
    cout<<mini<<" "<<mina<<endl;
  }
  return 0;
}

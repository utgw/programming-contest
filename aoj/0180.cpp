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
  int n,m;
  while(cin>>n>>m,n){
    vector<vector<int>> dist(n,vector<int>(n,inf));
    REP(i,m){
      int a,b,cost;cin>>a>>b>>cost;
      dist[a][b]=cost;
      dist[b][a]=cost;
    }
    set<int> vnew;
    set<pair<int,int>> enew;
    vnew.insert(0);
    while(vnew.size()<n){
      int mindist=inf;
      pair<int,int> minpair;
      for(int u:vnew)REP(v,n){
        if(vnew.find(v)!=vnew.end())continue;
        if(mindist>dist[u][v]){
          mindist=dist[u][v];
          minpair=make_pair(u,v);
        }
      }
      // cout<<minpair.first<<","<<minpair.second<<endl;
      vnew.insert(minpair.second);
      enew.insert(minpair);
    }
    int ans=0;
    for(auto& e:enew){
      ans+=dist[e.first][e.second];
    }
    cout<<ans<<endl;
  }
  return 0;
}

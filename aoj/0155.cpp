#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = 1e9;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

struct edge {
  int to;
  double cost;
};

typedef vector<edge> node;
typedef vector<node> graph;

int main(void){
  int n;
  while(cin>>n,n){
    graph G(n);
    vector<pair<int,int>> billpoint(n);
    REP(i,n){
      int b,x,y;cin>>b>>x>>y;
      billpoint[b-1]=make_pair(x,y);
    }
    REP(i,n)REP(j,n){
      if(i==j)continue;
      int x1,y1,x2,y2;
      tie(x1,y1)=billpoint[i];
      tie(x2,y2)=billpoint[j];
      double billdist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
      if(billdist<=50){
        G[i].push_back({j,billdist});
      }
    }
    // REP(i,n)REP(j,G[i].size()){
    //   cout<<i+1<<"->"<<G[i][j].to+1<<":"<<G[i][j].cost<<endl;
    // }
    // cout<<endl;
    int m;cin>>m;
    REP(j,m){
      int start,goal;cin>>start>>goal;
      start-=1;
      goal-=1;
      // dijkstra
      vector<double> dist(n,inf);
      vector<int> prev(n,-1);
      dist[start]=0;
      priority_queue<pair<double,int>> next;
      // REP(i,n)next.push(make_pair(dist[i],i));
      next.push(make_pair(0,start));
      while(!next.empty()){
        double cost;int u;
        tie(cost,u)=next.top();next.pop();
        if(dist[u]<cost)continue;
        for(auto& e:G[u]){
          int v=e.to;
          double alt=dist[u]+e.cost;
          if(dist[v]>alt){
            dist[v]=alt;
            prev[v]=u;
            // cout<<u+1<<"->"<<v+1<<":"<<alt<<endl;
            next.push(make_pair(alt,v));
          }
        }
      }
      if(prev[goal]==-1)cout<<"NA"<<endl;
      else{
        int mae=goal;
        vector<int> keiro;
        while(true){
          keiro.push_back(mae+1);
          if(mae==start)break;
          mae=prev[mae];
        }
        reverse(ALL(keiro));
        REP(j,keiro.size()){
          if(j==keiro.size()-1)cout<<keiro[j]<<endl;
          else cout<<keiro[j]<<" ";
        }
      }
    }
  }
  return 0;
}

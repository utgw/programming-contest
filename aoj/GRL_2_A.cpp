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
  int from;
  int to;
  ll cost;
  edge(int from,int to,ll cost) : from(from),to(to),cost(cost) {};
};

namespace std{
  bool operator< (const edge& lhs, const edge& rhs){
    return lhs.cost>rhs.cost;
  }
}

typedef vector<edge> node;
typedef vector<node> graph;

int main(void){
  int v,e;cin>>v>>e;
  graph G(v);
  REP(i,e){
    int s,t;ll w;cin>>s>>t>>w;
    G[s].push_back(edge(s,t,w));
    G[t].push_back(edge(t,s,w));
  }
  // prim
  ll ans=0;
  set<int> nodes;
  priority_queue<edge> edges;
  nodes.insert(0);
  for(edge& a:G[0]){
    edges.push(a);
  }
  while(nodes.size()<v){
    edge a(0,0,0);
    while(!edges.empty()){
      a=edges.top();edges.pop();
      if(nodes.find(a.from)!=nodes.end()&&nodes.find(a.to)==nodes.end())break;
    }
    nodes.insert(a.to);
    for(edge& b:G[a.to])edges.push(b);
    ans+=a.cost;
  }
  cout<<ans<<endl;
  return 0;
}

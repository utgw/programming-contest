// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A
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

ll prim(graph G){
  const int v=G.size();
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
  return ans;
}

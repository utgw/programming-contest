// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A
#include "../union_find.cpp"

struct edge {
  int from;
  int to;
  ll cost;
  edge(int from,int to,ll cost) : from(from),to(to),cost(cost) {};
};

namespace std{
  bool operator< (const edge& lhs, const edge& rhs){
    return lhs.cost<rhs.cost;
  }

  bool operator> (const edge& lhs, const edge& rhs){
    return !(lhs.cost<rhs.cost);
  }
}

typedef vector<edge> node;
typedef vector<node> graph;

ll kruskal(graph G){
  const int v=G.size();
  ll ans=0;
  vector<edge> ans_edges;
  priority_queue<edge,vector<edge>,greater<edge>> edges;
  union_find uf(v);
  for(int i = 0; i < v; ++i)for(edge& e:G[i]){
    edges.push(e);
  }
  while(!edges.empty()&&ans_edges.size()<v-1){
    edge e = edges.top();
    edges.pop();
    if(uf.same(e.from, e.to))
      continue;
    ans_edges.push_back(e);
    uf.unite(e.from, e.to);
    ans+=e.cost;
  }
  return ans;
}


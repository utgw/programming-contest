// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0155
struct edge {
  int to;
  ll cost;
};

typedef vector<edge> node;
typedef vector<node> graph;

pair<ll, vector<int>> dijkstra(graph& G, int start, int goal){
  const int n = G.size();
  vector<ll> dist(n, inf);
  vector<int> prev(n, -1);
  dist[start] = 0;
  priority_queue<pair<ll, int>> next;
  next.push(make_pair(0, start));
  while(!next.empty()){
    ll cost;
    int u;
    tie(cost,u) = next.top();
    next.pop();
    if(dist[u]<cost)
      continue;
    for(auto& e : G[u]){
      int v = e.to;
      ll alt = dist[u] + e.cost;
      if(dist[v] > alt){
        dist[v] = alt;
        prev[v] = u;
        next.push(make_pair(alt, v));
      }
    }
  }
  vector<int> keiro;
  if(prev[goal] != -1){
    int mae = goal;
    while(true){
      keiro.push_back(mae + 1);
      if(mae == start)break;
      mae = prev[mae];
    }
    reverse(keiro.begin(), keiro.end());
  }
  return make_pair(dist[goal], keiro);
}

// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
typedef long long ll;
typedef pair<ll, int> edge;
typedef vector<edge> node;
typedef vector<node> graph;

const ll inf = LLONG_MAX / 3;

vector<ll> dijkstra(graph& G, int start, int goal){
  const int n = G.size();
  vector<ll> dist(n, inf);
  priority_queue<edge, vector<edge>, greater<edge>> next;
  next.push(edge(0, start));
  while(!next.empty()){
    ll cost;
    int u;
    tie(cost, u) = next.top();
    next.pop();
    if(dist[u] < inf) continue;
    dist[u] = cost;
    for(auto& e : G[u]){
      next.push(edge(cost+e.first, e.second));
    }
  }
  return dist;
}

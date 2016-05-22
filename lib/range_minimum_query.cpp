// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
struct RMQ {
  int size;
  ll default_value;
  vector<ll> tree;

  RMQ (int n, ll def) {
    default_value = def;
    size = 1;
    while(size < n)size *= 2;
    tree = vector<ll>(size * 2 - 1, default_value);
  }

  void update(int x, ll y){
    int i = size + x - 1;
    tree[i] = y;
    while(i > 0){
      i = (i - 1) / 2;
      tree[i] = min(tree[2 * i + 1], tree[2 * i + 2]);
    }
  }

  // min [x, y)
  int find_min(int x, int y){
    return find_min(x, y, 0, 0, size);
  }

  int find_min(int x, int y, int k, int l, int r){
    if(r <= x || y<=l)
      return default_value;
    if(x <= l && r<=y)
      return tree[k];
    return min(find_min(x, y ,k * 2 + 1, l, (l + r) / 2), find_min(x, y, k * 2 + 2, (l + r) / 2, r));
  }
};

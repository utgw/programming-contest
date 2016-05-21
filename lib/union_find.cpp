// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
struct union_find {
  vector<int> par;
  vector<int> rank;

  union_find (int n) : par(n), rank(n, 0) {
    REP(i,n)par[i]=i;
  }

  int find (int x) {
    if (par[x] == x)
      return x;
    else
      return par[x] = find(par[x]);
  }

  bool same (int x, int y) {
    return find(x) == find(y);
  }

  void unite (int x, int y) {
    x = find(x);
    y = find(y);

    if (x == y)
      return;

    if (rank[x] < rank[y])
      par[x] = y;
    else {
      par[y] = x;
      if (rank[x] == rank[y])
        rank[x]++;
    }
  }
};

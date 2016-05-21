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

int main(void){
  int n,q;cin>>n>>q;
  union_find uf(n);
  REP(i,q){
    int com,x,y;cin>>com>>x>>y;
    if(com==0)
      uf.unite(x,y);
    else{
      if(uf.same(x,y))cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
  }
  return 0;
}

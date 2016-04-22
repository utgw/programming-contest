#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

struct Unionfind {
  vector<int> size;
  vector<int> par;

  Unionfind( int n ) :  size(n, 1), par(n) {
    iota( par.begin() , par.end() , 0 );
  }

  int find( int x ) {
    if ( par[x] == x ) return x;
    return par[x] = find( par[x] );
  }

  bool unite( int x , int y ) {
    x = find(x);
    y = find(y);
    if ( x == y ) return false;

    if ( size[y] < size[x] ) swap( x , y );

    par[x] = y;
    size[y] += size[x];

    return true;
  }

  bool same( int x , int y ) {
    return find(x) == find(y);
  }
};

int main(void){
  int n,q;cin>>n>>q;
  Unionfind uf(n);
  REP(i,q){
    int c,x,y;cin>>c>>x>>y;
    if(c==0)uf.unite(x,y);
    else{
      if(uf.same(x,y))cout<<1<<endl;
      else cout<<0<<endl;
    }
  }
  return 0;
}

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

ll _pow(ll a,ll b){
  if(b==0)return 1;
  if(b%2==0)return _pow(a,b/2)*_pow(a,b/2);
  return a*_pow(a,b-1);
}

template <typename T>
struct RMQ {
  int size;
  T default_value;
  vector<T> tree;

  RMQ (int n, T def) {
    default_value=def;
    size=1;
    while(size<n)size*=2;
    tree=vector<T>(size*2-1,default_value);
  }

  void update(int x,ll y){
    int i=size+x-1;
    tree[i]=y;
    while(i>0){
      i=(i-1)/2;
      tree[i]=min(tree[2*i+1],tree[2*i+2]);
    }
  }

  // min [x, y)
  int find_min(int x,int y){
    return find_min(x,y,0,0,size);
  }

  int find_min(int x,int y,int k, int l,int r){
    if(r<=x||y<=l)return default_value;
    if(x<=l&&r<=y)return tree[k];
    return min(find_min(x,y,k*2+1,l,(l+r)/2),find_min(x,y,k*2+2,(l+r)/2,r));
  }
};

int main(void){
  int n,q;cin>>n>>q;
  RMQ<ll> rmq(n,_pow(2,31)-1);
  REP(i,q){
    int c,x,y;cin>>c>>x>>y;
    if(c==0){//update
      rmq.update(x,y);
    }else{//find
      cout<<rmq.find_min(x,y+1)<<endl;
    }
    // REP(i,rmq.size)cout<<rmq.tree[i]<<" ";
    // cout<<endl;
  }
  return 0;
}

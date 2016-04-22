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
struct RSQ {
  int size;
  vector<T> tree;

  RSQ (int n) {
    size=1;
    while(size<n)size*=2;
    tree=vector<T>(size*2-1,0);
  }

  void add(int x,ll y){
    int i=size+x-1;
    tree[i]+=y;
    while(i>0){
      i=(i-1)/2;
      tree[i]=tree[i*2+1]+tree[i*2+2];
    }
  }

  // sum of [x, y)
  int sum(int x,int y){
    return sum(x,y,0,0,size);
  }

  T sum(int x,int y,int k,int l,int r){
    if(r<=x||y<=l)return 0;
    if(x<=l&&r<=y)return tree[k];
    return sum(x,y,2*k+1,l,(l+r)/2)+sum(x,y,2*k+2,(l+r)/2,r);
  }
};

int main(void){
  int n,q;cin>>n>>q;
  RSQ<ll> rsq(n);
  REP(i,q){
    int c,x,y;cin>>c>>x>>y;
    if(c==0){//add
      rsq.add(x-1,y);
    }else{//getSum
      cout<<rsq.sum(x-1,y)<<endl;
    }
    // REP(i,rsq.size*2-1)cout<<rsq.tree[i]<<" ";
    // cout<<endl;
  }
  return 0;
}

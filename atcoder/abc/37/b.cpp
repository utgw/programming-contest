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

int main(void){
  int n,q;cin>>n>>q;
  vector<int> a(n,0);
  REP(i,q){
    int l,r,t;cin>>l>>r>>t;
    FOR(j,l-1,r)a[j]=t;
  }
  REP(i,n)cout<<a[i]<<endl;
  return 0;
}

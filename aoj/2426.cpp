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
  int n,m;cin>>n>>m;
  vector<pair<ll,ll>> a(n);
  REP(i,n){
    ll x,y;cin>>x>>y;
    a[i]=make_pair(x,y);
  }
  REP(i,m){
    ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    ll ans=0;
    REP(j,n){
      ll x=a[j].first,y=a[j].second;
      if(x1<=x&&x<=x2&&y1<=y&&y<=y2){
        // cerr<<x<<","<<y<<endl;
        ans++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

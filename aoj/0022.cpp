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
  int n;
  while(cin>>n,n){
    vector<ll> s(n+1,0);
    FOR(i,1,n+1){
      cin>>s[i];
      s[i]+=s[i-1];
    }
    ll ans=-inf;
    REP(l,n+1)FOR(r,l+1,n+1){
      ans=max(ans,s[r]-s[l]);
    }
    cout<<ans<<endl;
  }
  return 0;
}

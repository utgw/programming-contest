#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  ll n,m,p;
  const ll hoee=32;
  cin>>n>>m>>p;
  ll ans=1;
  for(;p>0;p>>=1){
    if(p&1)ans=(ans*n)%m;
    n=(n*n)%m;
  }
  cout<<ans<<endl;
  return 0;
}

#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const ll MOD = 1000000007;

int main(void){
  ll m,n;cin>>m>>n;
  ll result=1;
  for(;n>0;n>>=1){
    if(n&1)result=((result%MOD)*(m%MOD))%MOD;
    m=(m*m)%MOD;
  }
  cout<<result<<endl;
  return 0;
}

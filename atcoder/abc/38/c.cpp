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
const ll mod = 1e9+7;

ll pow(ll a,ll b){
  ll res=1;
  for(;b>0;b>>=1){
    if(b&1)res=(res*(a%mod))%mod;
    a=((a%mod)*(a%mod))%mod;
  }
  return res;
}

ll inv(ll a){
  return pow(a,mod-2);
}

int main(void){
  int w;int h;cin>>w>>h;
  vector<ll> fac(w+h+1,1);
  REP(i,w+h){
    fac[i+1]=(fac[i]*(i+1))%mod;
  }
  cout<<(((fac[w+h-2]*inv(fac[w-1])%mod)%mod)*inv(fac[h-1])%mod)%mod<<endl;
  return 0;
}

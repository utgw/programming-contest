#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

ll uruu(ll i){
  return i/4-i/100+i/400;
}

int main(void){
  ll a,b;cin>>a>>b;
  cout<<uruu(b)-uruu(a-1)<<endl;
  return 0;
}

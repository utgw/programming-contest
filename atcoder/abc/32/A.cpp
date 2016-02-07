#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int gcd(int a,int b){
  return !b?a:gcd(b,a%b);
}

int lcm(int a,int b){
  return a*b/gcd(a,b);
}

int main(void){
  int a,b,n;cin>>a>>b>>n;
  int l=lcm(max(a,b),min(a,b));
  int ans=0;
  while(ans<n)ans+=l;
  cout<<ans<<endl;
  return 0;
}

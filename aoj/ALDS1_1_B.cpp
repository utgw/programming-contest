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
  if(a<b)swap(a,b);
  return b==0?a:gcd(b,a%b);
}

int main(void){
  int a,b;cin>>a>>b;
  cout<<gcd(a,b)<<endl;
  return 0;
}

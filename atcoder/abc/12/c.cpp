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
  const int M=2025;
  int n;cin>>n;
  int d=M-n;
  FOR(a,1,10){
    int b=d/a;
    if(a*b==d&&b<10)
      cout<<a<<" x "<<b<<endl;
  }
  return 0;
}

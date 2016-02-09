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
  int L,H,N;cin>>L>>H>>N;
  REP(i,N){
    int a;cin>>a;
    if(a>H)cout<<-1<<endl;
    else cout<<max(L-a,0)<<endl;
  }
  return 0;
}

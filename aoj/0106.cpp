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
  int g;
  while(cin>>g,g){
    int ans=inf;
    REP(i,51){
      REP(j,51){
        REP(k,51){
          if(200*i+300*j+500*k!=g)continue;
          int wi=i/5,wj=j/4,wk=k/3;
          int nwi=max(0,i-wi*5),nwj=max(0,j-wj*4),nwk=max(0,k-wk*3);
          ans=min(ans,wi*1520+wj*1870+wk*2244+nwi*380+nwj*550+nwk*850);
          // cout<<i<<","<<j<<","<<k<<","<<ans<<endl;
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

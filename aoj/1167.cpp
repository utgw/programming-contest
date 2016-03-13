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
  // 1e6より小さい正四面体数を計算
  const int NM=1000000;
  int n=1;
  vector<int> sa,sb;
  while(1){
    int k=n*(n+1)*(n+2)/6;
    if(k>=NM)break;
    sa.push_back(k);
    if(k%2==1)sb.push_back(k);
    n++;
  }
  vector<ll> dpa(NM+1,inf),dpb(NM+1,inf);
  dpa[0]=dpb[0]=0;
  REP(i,NM+1)REP(j,sa.size()){
    // cerr<<i<<" "<<j<<endl;
    if(i-sa[j]>=0)dpa[i]=min(dpa[i],dpa[i-sa[j]]+1);
    if(j<sb.size()&&i-sb[j]>=0)dpb[i]=min(dpb[i],dpb[i-sb[j]]+1);
  }
  int N;
  while(cin>>N,N){
    cout<<dpa[N]<<" "<<dpb[N]<<endl;
  }
  return 0;
}

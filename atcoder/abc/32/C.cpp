//TODO
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
  int N,K;cin>>N>>K;
  vector<ll> a(N);
  bool zero=false;
  REP(i,N){
    cin>>a[i];
    zero=(a[i]==0)||zero;
  }
  if(zero){
    cout<<N<<endl;
    return 0;
  }
  int ans=0;
  ll s=1;
  int right=1;
  REP(left,N){
    while(s<=K&&right<N+1){
      s*=a[right-1];
      right++;
    }
    s/=a[right-1];
    right--;
    ans=max(ans,right-left);
    s/=a[left];
  }
  cout<<ans<<endl;
  return 0;
}

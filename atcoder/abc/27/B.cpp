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
  int n;cin>>n;
  vector<int> a(n);
  int s=0;
  REP(i,n){
    cin>>a[i];
    s+=a[i];
  }
  if(s%n!=0)
    cout<<-1<<endl;
  else{
    int avg=s/n;
    int left=0,right=0;
    int ans=0;
    int t=0;
    while(right<n){
      t+=a[right];
      // cout<<left<<","<<right<<endl;
      // cout<<t<<endl;
      if(t==avg*(right-left+1)){
        ans+=right-left;
        left=right+1;
        t=0;
        right=left;
      }else{
        right++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

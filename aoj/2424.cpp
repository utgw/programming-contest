#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int _exp(int a,int b){
  if(b==0)return 1;
  else if(b%2==0)return _exp(a,b/2)*_exp(a,b/2);
  else return a*_exp(a,b-1);
}

int main(void){
  int n;cin>>n;
  REP(i,n){
    int j;cin>>j;
    int ans=0;
    while(j>=10&&ans<INT_MAX-2){
      string js=to_string(j);
      int l=js.size();
      int next=0;
      REP(k,l-1){
        int a=j/_exp(10,l-k-1),b=j%_exp(10,l-k-1);
        next=max(next,a*b);
      }
      j=next;
      ans++;
    }
    if(ans>=INT_MAX-2)cout<<-1<<endl;
    else cout<<ans<<endl;
  }
  return 0;
}

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
  int k=0,s=0;
  REP(i,n){
    int a;cin>>a;
    if(a>0){
      s+=a;
      k++;
    }
  }
  if(s%k==0)cout<<s/k<<endl;
  else cout<<s/k+1<<endl;
  return 0;
}

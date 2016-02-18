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
  int n,x;  
  while(cin>>n>>x,n||x){
    int ans=0;
    FOR(a,1,n+1) FOR(b,a+1,n+1){
      int c=x-a-b;
      if(c>a&&c>b&&c<=n)ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}

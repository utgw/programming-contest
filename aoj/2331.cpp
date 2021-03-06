#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

int main(void){
  int n;cin>>n;
  vector<int> ok(100002,0);
  REP(i,n){
    int a,b;cin>>a>>b;
    FOR(j,a-1,b)ok[j]++;
  }
  int ans=0;
  FOR(i,1,n+1){
    if(ok[i]>=i)ans=min(i,ok[i]);
  }
  cout<<ans<<endl;
  return 0;
}

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
  int e;
  while(cin>>e,e){
    int ans=inf;
    for(int z=0;z*z*z<=e;z++){
      int y=0;
      while((y+1)*(y+1)+z*z*z<=e)y++;
      ans=min(ans,z+y+e-z*z*z-y*y);
    }
    cout<<ans<<endl;
  }
  return 0;
}

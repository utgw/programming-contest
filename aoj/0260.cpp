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
  int n;
  while(cin>>n,n){
    vector<int> pipe(n),joint(n-1);
    ll sum=0,ans=0;
    REP(i,n){
      cin>>pipe[i];
      sum+=pipe[i];
    }
    REP(i,n-1){
      cin>>joint[i];
      sum+=joint[i];
    }
    ans=sum;
    sort(ALL(joint));
    REP(i,n-1){
      sum-=joint[i];
      ans=max(ans, sum*(i+2));
    }
    cout<<ans<<endl;
  }
  return 0;
}

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
  int n,q;
  while(cin>>n>>q,n){
    vector<int> conv(101,0);
    REP(i,n){
      int m;cin>>m;
      REP(j,m){
        int d;cin>>d;
        conv[d]++;
      }
    }
    int ans=101,poe=q;
    FOR(i,1,101){
      if(conv[i]>poe||conv[i]>=q&&i<ans){
        ans=i;
        poe=conv[i];
      }
    }
    if(ans==101)cout<<0<<endl;
    else cout<<ans<<endl;
  }
  return 0;
}

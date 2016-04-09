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
  vector<string> s(n);
  REP(i,n)cin>>s[i];
  REP(y,n){
    REP(x,n){
      if(y<n/2)
        cout<<s[n-x-1][y];
      else
        cout<<s[n-x-1][y];
    }
    cout<<endl;
  }
  return 0;
}

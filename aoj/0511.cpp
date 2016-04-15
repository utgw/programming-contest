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
  vector<bool> a(31,false);
  REP(i,28){
    int b;cin>>b;
    a[b]=true;
  }
  FOR(i,1,31){
    if(!a[i])cout<<i<<endl;
  }
  return 0;
}

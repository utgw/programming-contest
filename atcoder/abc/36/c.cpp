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
  REP(i,n)cin>>a[i];
  vector<int> b(a);
  sort(ALL(b));
  b.erase(unique(ALL(b)),b.end());
  // REP(i,b.size())cout<<b[i]<<endl;
  // cout<<endl;
  map<int,int> d;
  REP(i,b.size())d[b[i]]=i;
  REP(i,a.size())cout<<d[a[i]]<<endl;
  return 0;
}

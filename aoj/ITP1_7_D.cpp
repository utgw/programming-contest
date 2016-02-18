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
  int n,m,l;cin>>n>>m>>l;
  int a[100][100],b[100][100];
  REP(i,n) REP(j,m) cin>>a[i][j];
  REP(i,m) REP(j,l) cin>>b[i][j];
  REP(i,n) REP(j,l){
    ll c=0;
    REP(k,m)c+=a[i][k]*b[k][j];
    cout<<c;
    if(j<l-1)cout<<" ";
    else cout<<endl;
  }
  return 0;
}

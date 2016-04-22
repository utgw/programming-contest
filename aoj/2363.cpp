#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef long double ld;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  int t;cin>>t;
  int v[10][100];
  int n[100],m[100];
  ld r[10][100];
  REP(i,t){
    cin>>n[i]>>m[i];
    REP(j,m[i])cin>>v[i][j]>>r[i][j];
  }
  int p,q;cin>>p>>q;
  int hv[100];
  ld hr[100];
  REP(i,q)cin>>hv[i]>>hr[i];
  ld he=0;
  ld hrs=0;
  // hancho
  REP(i,q){
    he+=hv[i]*hr[i];
    hrs+=hr[i];
  }
  he/=hrs;
  // cout<<he<<endl;
  // mine
  ld me=0;
  REP(i,t){
    ld poyo=0;
    ld peya=0;
    REP(j,m[i]){
      poyo+=v[i][j]*r[i][j];
      peya+=r[i][j];
    }
    poyo/=peya;
    // cout<<poyo<<endl;
    me=max(me,poyo);
  }
  // cout<<me<<endl;
  if(me>he)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}

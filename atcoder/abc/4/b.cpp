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
  char masu[4][4];
  REP(i,4)REP(j,4)cin>>masu[i][j];
  REP(i,4){
    REP(j,4){
      cout<<masu[3-i][3-j];
      if(j<3)cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}

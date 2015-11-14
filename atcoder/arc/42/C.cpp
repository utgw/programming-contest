#include <iostream>
#include <algorithm>
using namespace std;
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
const int MAX_NP = 5000;
int n,p;
int w[MAX_NP];
int v[MAX_NP];

int dp(int i,int j){
  int res;
  if(i==n) res = 0;
  else if(j<w[i]) res = dp(i+1,j);
  else{
    res = max(dp(i+1,j),dp(i+1,j-w[i])+v[i]);
  }
  return res;
}

int main(){
  cin >> n >> p;
  REP(i,n)cin >> w[i] >> v[i];
  cout << dp(0,p) << endl;
}

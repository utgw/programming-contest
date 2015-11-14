#include <bits/stdc++.h>
using namespace std;
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
  int N,a;
  int start,step;
  ll mod = 2;
  ll k;
  //string kstr;
  cin >> N >> a;
  //cin >> kstr;
  cin >> k;
  vector<int> b(N+1);
  vector<bool> visited(N+1,false);
  REP(i,N) cin >> b[i+1];
  start = b[a];
  step = a;
  for(;;++mod){
    if(visited[step]) break;
    step = b[step];
    visited[step] = true;
  }
  int result = b[start];
  REP(i,k % mod)
    result = b[result];
  cout << result << endl;
  return 0;
}
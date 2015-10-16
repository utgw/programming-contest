#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define RFOR(i,m,n) for(int i=m;i>=(n);i--)
#define REP(i,n) FOR(i,0,n)
using namespace std;
typedef long long ll;

int main(){
  int n;
  ll t;
  cin >> n >> t;
  vector<ll> S(n+1);
  S[0] = 0;
  FOR(i,1,n+1){
    cin >> S[i];
    S[i] += S[i-1];
  }
  vector<int> result(n+1,0);
  FOR(i,1,n+1){
    REP(j,i){
      if(S[i] - S[j] <= t){
        result[i] = max(result[i-1], i-j);
        break;
      }
    }
  }
  cout << result[n] << endl;
  return 0;
}
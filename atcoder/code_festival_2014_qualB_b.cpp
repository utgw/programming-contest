#include <iostream>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
typedef long long ll;
using namespace std;

int main(){
  int N;
  ll K;
  ll step = 0;
  int res = 0;
  cin >> N >> K;
  REP(i,N){
    ll a;
    cin >> a;
    step += a;
    if(step >= K && res == 0) res = i+1;
  }
  cout << res << endl;
  return 0;
}
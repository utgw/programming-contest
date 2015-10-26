#include <iostream>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
typedef long long ll;
using namespace std;

ll exponent(ll base, ll p){
  if(p == 0) return 1;
  else if(p % 2 == 0) return exponent(base,p/2) * exponent(base,p/2);
  else return base * exponent(base,p-1);
}

int main(){
  int N;
  int a;
  ll res = 0;
  cin >> N;
  REP(i,N){
    cin >> a;
    res += a * exponent(2, N-i-1);
  }
  cout << res << endl;
  return 0;
}
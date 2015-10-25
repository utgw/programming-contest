// TODO
#include <iostream>
typedef long long ll;
using namespace std;
#define FOR(i,m,n) for(ll i=m;i<(ll)(n);i++)
#define REP(i,n) FOR(i,0,n)

bool is_uruu(ll year){
  return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main(){
  ll A, B;
  ll res = 0;
  cin >> A >> B;
  FOR(i,A,B+1){
    if(is_uruu(i)) res++;
  }
  cout << res << endl;
  return 0;
}
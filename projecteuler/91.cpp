// TODO
#include <iostream>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
int main(){
  const int mx = 51;
  int cnt = 0;
  REP(a,mx) REP(b,mx) FOR(c,a,mx) FOR(d,b,mx) if(a*d-b*c!=0) cnt++;
  std::cout << cnt << std::endl;
  return 0;
}

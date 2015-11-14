#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

int main(void){
  string S,T,U;
  cin >> S >> T >> U;
  if(S.length() == 5 && T.length() == 7 && U.length() == 5)
    cout << "valid" << endl;
  else
    cout << "invalid" << endl;
  return 0;
}
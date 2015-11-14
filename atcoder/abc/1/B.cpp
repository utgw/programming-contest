#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

int main(void){
  int m; cin >> m;
  if(m < 100)
    cout << setfill('0') << setw(2) << 0 << endl;
  else if(m >= 100 && m <= 5000)
    cout << setfill('0') << setw(2) << m / 100 << endl;
  else if(m >= 6000 && m <= 30000)
    cout << m / 1000 + 50 << endl;
  else if(m >= 35000 && m <= 70000)
    cout << (m / 1000 - 30) / 5 + 80 << endl;
  else
    cout << 89 << endl;
  return 0;
}
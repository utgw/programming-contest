#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;

int main(void){
  int a,b;
  cin >> a >> b;
  int d = 10;
  while(b / d) d *= 10;
  cout << (a * d + b) * 2 << endl;
  return 0;
}

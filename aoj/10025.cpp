#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
const double PI = acos(0)*2;
using namespace std;

int main(void){
  double a,b,C; cin >> a >> b >> C;
  double Crad = C*PI/180;
  double S = a*b*sin(Crad)*0.5;
  double L = a+b+sqrt(a*a+b*b-2*a*b*cos(Crad));
  double h = b*sin(Crad);
  cout << fixed << setprecision(8);
  cout << S << endl;
  cout << L << endl;
  cout << h << endl;
  return 0;
}
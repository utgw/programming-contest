#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
const double PI = 2*acos(0.0);

int main(){
  double r;
  scanf("%lf\n",&r);
  printf("%.6lf %.6lf\n",r*r*PI,2*r*PI);
  return 0;
}
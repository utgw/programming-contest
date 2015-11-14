#include <bits/stdc++.h>
using namespace std;

int main(void){
  double x1,y1,x2,y2,x3,y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  double a = x2 - x1, b = y2 - y1, c = x3 - x1, d = y3 - y1;
  cout << fixed << setprecision(2) << abs(a*d - b*c) / 2 << endl;
  return 0;
}
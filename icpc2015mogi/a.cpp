#include <iostream>
#include <cmath>
using namespace std;

int main(){
  const double inf = 114514;
  while(true){
    int d, e;
    double min = inf;
    double distance;
    cin >> d >> e;
    if(d==0) break;
    for(int x=0;x<d;x++){
      int y = d - x;
      distance = sqrt(x*x+y*y);
      if(abs(distance-e) < min) min = abs(distance-e);
    }
    cout << min << endl;
  }
  return 0;
}

#include <iostream>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(){
  const int direction[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
  int x, y;
  int nx = 0, ny = 0;
  int result;
  int step = 1;
  cin >> x >> y;
  for(result = 0;;result++){
    if(result % 2 == 0 && result != 0)
      step++;
    REP(i,step){
      if(nx == x && ny == y)
        break;
      nx += direction[result%4][0];
      ny += direction[result%4][1];
    }
    if(nx == x && ny == y)
      break;
  }
  cout << result << endl;
  return 0;
}

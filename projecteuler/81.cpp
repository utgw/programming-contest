#include <iostream>
#include <algorithm>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(){
  int data[80][80];
  int res[80][80];
  REP(i,80) REP(j,80) cin >> data[i][j];
  res[0][0] = data[0][0];
  FOR(i,1,80){
    res[0][i] = res[0][i-1] + data[0][i];
    res[i][0] = res[i-1][0] + data[i][0];
  }
  FOR(y,1,80) FOR(x,1,80) res[y][x] = data[y][x] + min(res[y-1][x],res[y][x-1]);
  cout << res[79][79] << endl;
  return 0;
}

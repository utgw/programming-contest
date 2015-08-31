#include <iostream>
#include <algorithm>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;

int prod(int data[20][20], int y, int x, int dy, int dx){
  return data[y][x]*data[y+dy][x+dx]*data[y+2*dy][x+2*dx]*data[y+3*dy][x+3*dx];
}

int main(){
  int data[20][20];
  int res = 0;
  REP(i,20) REP(j,20) cin >> data[i][j];
  REP(i,20){
    REP(j,20){
      if(i <= 16) res = max(res, prod(data,i,j,1,0));
      if(j <= 16) res = max(res, prod(data,i,j,0,1));
      if(i <= 16 && j <= 16) res = max(res, prod(data,i,j,1,1));
      if(i < 16 && j >= 3) res = max(res, prod(data,i,j,1,-1));
    }
  }
  cout << res << endl;
  return 0;
}

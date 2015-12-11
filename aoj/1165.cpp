#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(void){
  const int xm = 400, ym = 400;
  const int x0 = xm / 2, y0 = ym / 2;
  const char direction[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
  int N;
  while(cin >> N, N != 0){
    char box[xm][ym];
    memset(box,0,sizeof(box));
    box[x0][y0] = 1;
    vector<pair<int,int>> history;
    history.push_back(make_pair(x0,y0));
    REP(i,N-1){
      int n,d; cin >> n >> d;
      int x = get<0>(history[n]) + direction[d][0];
      int y = get<1>(history[n]) + direction[d][1];
      box[x][y] = 1;
      history.push_back(make_pair(x,y));
    }
    int xl = xm, xr = 0, yu = ym, yd = 0;
    REP(y,ym) REP(x,xm){
      if(box[x][y] == 1){
        xl = min(xl,x);
        xr = max(xr,x);
        yu = min(yu,y);
        yd = max(yd,y);
      }
    }
    cout << xr - xl + 1 << " " << yd - yu + 1 << endl;
  }
  return 0;
}

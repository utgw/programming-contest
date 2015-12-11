#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
const int inf = 1000000000;

int main(void){
  int N;
  while(cin >> N, N != 0){
    int W,H; cin >> W >> H;
    char p[101][101];
    memset(p,0,sizeof(p));
    REP(i,N){
      int x,y; cin >> x >> y;
      p[x][y] = 1;
    }
    int S, T; cin >> S >> T;
    int dp[101][101];
    memset(dp,0,sizeof(dp));
    FOR(y,1,H+1) FOR(x,1,W+1){
      dp[x][y] = p[x][y] + dp[x-1][y] + dp[x][y-1] - dp[x-1][y-1];
    }
    int answer = 0;
    FOR(y,T,H+1) FOR(x,S,W+1)
      answer = max(answer,dp[x][y]-dp[x-S][y]-dp[x][y-T]+dp[x-S][y-T]);
    cout << answer << endl;
  }
  return 0;
}

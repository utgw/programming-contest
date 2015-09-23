#include <iostream>
#include <string.h>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

bool simulate(int n, int a, int b, int c){
  int result[301][101];
  memset(result, -1, sizeof(result));
  REP(i,301){
    // 数字が1以上で残り回数が0になったらNO
    result[i][0] = 0;
  }
  REP(i,101){
    // いかなる残り回数でも残り数字が0になったらYES
    result[0][i] = 1;
  }
  REP(i,101){
    result[a][i] = 0;
    result[b][i] = 0;
    result[c][i] = 0;
  }
  FOR(i,1,n+1){
    FOR(j,1,101){
      if(result[i][j] != -1) continue;
      result[i][j] = max(0, result[i-1][j-1]);
      if(i >= 2) result[i][j] = max(result[i][j], result[i-2][j-1]);
      if(i >= 3) result[i][j] = max(result[i][j], result[i-3][j-1]);
    }
  }
  return result[n][100] == 1;
}

int main(){
  int N, A, B, C;
  cin >> N >> A >> B >> C;
  if(simulate(N, A, B, C))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
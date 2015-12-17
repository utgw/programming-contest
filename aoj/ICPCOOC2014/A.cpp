#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(void){
  int N, M;
  cin >> N >> M;
  vector<int> b(N), p(M);
  int cntof1t = 0;
  REP(i,N){
    cin >> b[i];
    if(p[i] == 1)
      cntof1t++;
  }
  REP(i,M)
    cin >> p[i];
  vector<int> cand(N);
  int now = 0;
  int cntof1 = 0;
  REP(i,2){
    int l = 0;
    REP(j,M){
      REP(k,p[j]){
        cand[l] = now;
        l++;
        if(now == 1)
          cntof1++;
      }
      now = 1 - now;
    }
    if(cntof1 == cntof1t)
      break;
  }
  REP(i,N)
    cout << cand[i] << " ";
  cout << endl;
  //cout << result << endl;
  return 0;
}

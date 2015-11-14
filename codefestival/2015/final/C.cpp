#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

int main(void){
  int N; cin >> N;
  int count = 0;
  string S; cin >> S;
  REP(i,S.size()-1){
    if(S.substr(i,2) == "01" || S.substr(i,2) == "10"){
      count++;
      i++;
    }
  }
  cout << N - count << endl;
  return 0;
}
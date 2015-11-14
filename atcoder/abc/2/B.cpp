#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(void){
  string W; cin >> W;
  for(char ch : W){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      continue;
    cout << ch;
  }
  cout << endl;
  return 0;
}
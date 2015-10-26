#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(){
  set<string> S;
  string oper, str;
  int n; cin >> n;
  REP(i,n){
    cin >> oper >> str;
    if(oper == "insert")
      S.insert(str);
    else{
      if(S.find(str) != S.end())
        cout << "yes" << endl;
      else
        cout << "no" << endl;
    }
  }
  return 0;
}
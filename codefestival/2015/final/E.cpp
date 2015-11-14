#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

int exec(const string &program, const int &in){
  int var = in;
  RREP(i,program.size()){
    if(program[i] == '!')
      var = var == 0 ? 1 : 0;
    else
      var = -var;
  }
  return var;
}

string shorten(const string &program){
  const vector<string> pat({"","-","!","!!","-!","!-","!-!","-!-","!!-","-!!"});
  for(string p : pat){
    if(exec(program,2) == exec(p,2) &&
       exec(program,1) == exec(p,1) &&
       exec(program,0) == exec(p,0) &&
       exec(program,-1) == exec(p,-1) &&
       exec(program,-2) == exec(p,-2)
     ){
      if(program.size() <= p.size())
        return program;
      return p;
    }
  }
}

int main(void){
  string S; cin >> S;
  cout << shorten(S) << endl;
  return 0;
}
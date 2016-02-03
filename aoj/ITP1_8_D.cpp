#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(){
  string s,p; cin>>s>>p;
  s+=s;
  REP(i,s.size()-p.size()){
    if(p==s.substr(i,p.size())){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
  return 0;
}

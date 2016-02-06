#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  string S;cin>>S;
  int sep=0;
  int result=0;
  REP(i,S.size()){
    if(S[i]=='+'||i==S.size()-1){
      string buf=S.substr(sep,i-sep+1);
      bool nz=false;
      REP(i,buf.size()){
        if(buf[i]=='0'){
          nz=true;
          break;
        }
      }
      if(!nz)result++;
      sep=i+1;
    }
  }
  cout<<result<<endl;
  return 0;
}

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
  if(S[0]==S[1]&&S[1]==S[2]&&S[2]==S[3])cout<<"SAME"<<endl;
  else cout<<"DIFFERENT"<<endl;
  return 0;
}

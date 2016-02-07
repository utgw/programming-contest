#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  string s;int k;cin>>s>>k;
  if(k>s.size()){
    cout<<0<<endl;
    return 0;
  }
  set<string> p;
  REP(i,s.size()-k+1){
    string password=s.substr(i,k);
    p.insert(password);
  }
  cout<<p.size()<<endl;
  return 0;
}

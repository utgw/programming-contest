#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);


int main(void){
  int N;cin>>N;
  ll p=100000;
  REP(i,N){
    p+=p*0.05;
    if(p%1000>0){
      p-=p%1000;
      p+=1000;
    }
  }
  cout<<p<<endl;
  return 0;
}

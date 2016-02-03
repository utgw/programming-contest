#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
typedef long long ll;
using namespace std;
ll calculate(ll year,ll month,ll day){
  ll result=0;
  FOR(y,1,year){
    result+=195;
    if(y%3==0)result+=5;
  }
  FOR(m,1,month){
    if(year%3==0||m%2==1)result+=20;
    else result+=19;
  }
  return result+day-1;
}

int main(void){
  const ll milenium=calculate(1000,1,1);
  int N;cin>>N;
  REP(i,N){
    ll y,m,d;cin>>y>>m>>d;
    cout<<milenium-calculate(y,m,d)<<endl;
  }
  return 0;
}

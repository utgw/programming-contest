#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef unsigned long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const ll mod = 1e9+7;

int main(void){
  priority_queue<ll,vector<ll>,greater<ll>> a;
  ll N,A,B;cin>>N>>A>>B;
  REP(i,N){
    ll b;cin>>b;
    a.push(b);
  }
  REP(i,B){
    ll b=a.top();a.pop();
    b*=A;
    a.push(b);
  }
  while(!a.empty()){
    ll b=a.top();a.pop();
    cout<<b%mod<<endl;
  }
  return 0;
}

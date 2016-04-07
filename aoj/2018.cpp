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
  int n,m,p;
  while(cin>>n>>m>>p,n){
    vector<int> x(n);
    int total=0;
    REP(i,n){
      cin>>x[i];
      total+=100*x[i];
    }
    if(x[m-1]<=0)cout<<0<<endl;
    else cout<<total*(100-p)/100/x[m-1]<<endl;
  }
  return 0;
}

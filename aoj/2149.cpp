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
  int n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x,n){
    vector<int> y(n);
    REP(i,n)cin>>y[i];
    int frame=0,now=0;
    while(now<n&&frame<=10000){
      if(x==y[now])now++;
      x=((a*x)%c+b%c)%c;
      if(now==n)break;
      else frame++;
    }
    if(frame>10000)cout<<-1<<endl;
    else cout<<frame<<endl;
  }
  return 0;
}

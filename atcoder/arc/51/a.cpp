#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

ll square(int x){
  return x*x;
}

int main(void){
  int x1,y1,r;cin>>x1>>y1>>r;
  int x2,y2,x3,y3;cin>>x2>>y2>>x3>>y3;
  // 赤い部分
  if(x2<=x1-r&&x3>=x1+r&&y2<=y1-r&&y3>=y1+r)
    cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  // 青い部分
  if(square(x2-x1)+square(y2-y1)<=square(r)&&square(x3-x1)+square(y3-y1<=square(r))&&
    square(x3-x1)+square(y2-y1)<=square(r)&&square(x3-x1)+square(y2-y1<=square(r)))
    cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  return 0;
}

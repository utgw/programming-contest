#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int _pow(int a,int b){
  if(b==0)return 1;
  if(b%2==0)return _pow(a,b/2)*_pow(a,b/2);
  return a*_pow(a,b-1);
}

int main(void){
  int a,l;
  while(cin>>a>>l,l){
    int b=a;
    vector<int> c(40);
    c[0]=a;
    FOR(p,1,40){
      vector<int> keta(l);
      int amax=0,amin=0;
      REP(i,l)keta[i]=c[p-1]%_pow(10,i+1)/_pow(10,i);
      sort(ALL(keta));
      REP(i,l){
        amax=10*amax+keta[l-i-1];
        amin=10*amin+keta[i];
      }
      c[p]=amax-amin;
    }
    // REP(i,40)cout<<c[i]<<endl;
    REP(i,40){
      bool ok=false;
      FOR(j,i+1,40){
        if(c[i]==c[j]){
          ok=true;
          cout<<i<<" "<<c[i]<<" "<<j-i<<endl;
          break;
        }
      }
      if(ok)break;
    }
  }
  return 0;
}

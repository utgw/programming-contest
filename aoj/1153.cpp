#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
const int inf = 2147483647;

int main(){
  int n,m;
  while(scanf("%d%d",&n,&m), !(n == 0 && m == 0)){
    int S = 0, T = 0;
    int sm = inf;
    int a,b;
    vector<int> s(n),t(m);
    REP(i,n){
      scanf("%d", &s[i]);
      S += s[i];
    }
    REP(i,m){
      scanf("%d", &t[i]);
      T += t[i];
    }
    REP(i,n){
      REP(j,m){
        if(S - s[i]*2 == T - t[j]*2 && s[i] + t[j] < sm){
          sm = s[i] + t[j];
          a = s[i];
          b = t[j];
        }
      }
    }
    if(sm == inf) printf("-1\n");
    else printf("%d %d\n",a,b);
  }
  return 0;
}
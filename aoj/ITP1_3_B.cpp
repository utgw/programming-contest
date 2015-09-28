#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
const int inf = 2147483647;

int main(){
  FOR(i,1,inf){
    int x;
    scanf("%d",&x);
    if(x == 0) break;
    printf("Case %d: %d\n",i,x);
  }
  return 0;
}
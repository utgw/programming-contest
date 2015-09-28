#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(){
  int x,y;
  while(scanf("%d%d",&x,&y), !(x == 0 && y == 0))
    printf("%d %d\n",min(x,y),max(x,y));
  return 0;
}
#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

bool nabeatsu(int k){
  if(k % 3 == 0) return true;
  while(k != 0){
    if(k % 10 == 3) return true;
    k /= 10;
  }
  return false;
}

int main(){
  int n;
  scanf("%d",&n);
  FOR(i,1,n+1)
    if(nabeatsu(i)) printf(" %d",i);
  printf("\n");
  return 0;
}
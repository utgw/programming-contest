#include <cstdio>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)

int count(int target, int l[]){
  int res = 0;
  REP(i,3)
    if(l[i] == target) res++;
  return res;
}

int main(){
  int l[3];
  REP(i,3)scanf("%d",&l[i]);
  REP(i,3){
    if(count(l[i],l) == 1 || count(l[i],l) == 3){
      printf("%d\n",l[i]);
      break;
    }
  }
  return 0;
}

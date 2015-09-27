#include <stdio.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)

int linearsearch(int target, int array[], int size){
  REP(i,size){
    if(array[i] == target) return i;
  }
  return -1;
}

int main(){
  const int MAX_n = 20;
  int n, A[MAX_n], q;
  int S[1<<MAX_n];
  scanf("%d",&n);
  REP(i,n) scanf("%d",&A[i]);
  REP(i,1<<n){
    S[i] = 0;
    REP(j,n){
      if(i>>j&1 == 1)
        S[i] += A[j];
    }
  }
  scanf("%d",&q);
  REP(i,q){
    int target;
    scanf("%d",&target);
    if(linearsearch(target,S,1<<n) != -1) printf("yes\n");
    else printf("no\n");
  }
  return 0;
}
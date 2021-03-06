#include <stdio.h>
#include <functional>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int linearsearch(int target, int array[], int size){
  REP(i,size){
    if(array[i] == target) return i;
  }
  return -1;
}

int main(){
  const int MAX_n = 100000;
  int n, q;
  int S[MAX_n];
  int result = 0;
  scanf("%d",&n);
  REP(i,n) scanf("%d",&S[i]);
  scanf("%d",&q);
  REP(i,q){
    int target;
    scanf("%d",&target);
    if(linearsearch(target,S,n) != -1) result++;
  }
  printf("%d\n",result);
  return 0;
}
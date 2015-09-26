#include <stdio.h>
#include <functional>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int binarysearch(int target, int array[], int left, int right){
  int mid = (left + right) / 2;
  if(left < right){
    if(array[mid] == target) return mid;
    else if(target < array[mid]) return binarysearch(target, array, left, mid);
    else return binarysearch(target, array, mid+1, right);
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
    if(binarysearch(target,S,0,n) != -1) result++;
  }
  printf("%d\n",result);
  return 0;
}
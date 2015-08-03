#include <stdio.h>
int main(){
  int A;
  int i,max;
  max = 0;
  scanf("%d",&A);
  for(i=1;i<=A/2;i++){
    if(i*(A-i) >= max) max = i*(A-i);
  }
  printf("%d\n",max);
  return 0;
}

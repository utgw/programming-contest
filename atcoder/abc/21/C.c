#include <stdio.h>
#include <stdlib.h>
int main(){
  char in[5];
  int i,n;
  gets(in);
  n = atoi(in);
  printf("%d\n",n);
  for(i=0;i<n;i++){
    printf("1\n");
  }
  return 0;
}

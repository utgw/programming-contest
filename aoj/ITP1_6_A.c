#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int n,i;
  int nums[100];
  char str[10000];
  char *p;
  scanf("%d\n",&n);
  i=n-1;
  gets(str);
  p = strtok(str," ");
  nums[i]=atoi(p);
  while(p!=NULL){
    p = strtok(NULL," ");
    if(p!=NULL){
      i--;
      nums[i]=atoi(p);
    }
  }
  for(i=0;i<n;i++){
    printf("%d",nums[i]);
    if(i!=n-1) printf(" ");
  }
  printf("\n");
  return 0;
}

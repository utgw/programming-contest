#include <stdio.h>
int main(){
  char S[10];
  char set[25][3];
  int i,j,n;
  scanf("%s",S);
  scanf("%d",&n);
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      sprintf(set[i*5+j],"%c%c",S[i],S[j]);
    }
  }
  printf("%s\n",set[n-1]);
  return 0;
}

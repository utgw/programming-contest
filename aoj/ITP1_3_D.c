#include <stdio.h>

int main(){
  int a,b,c;
  int i=0;
  scanf("%d%d%d\n",&a,&b,&c);
  for(;a<=b;a++) if(c%a==0) i++;
  printf("%d\n",i);
  return 0;
}

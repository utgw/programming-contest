#include <stdio.h>
int main(){
  char str[30];
  int i;
  scanf("%s\n",str);
  for(i=0;str[i+1]!='\0';i++);
  for(;i>=0;i--)printf("%c",str[i]);
  printf("\n");
  return 0;
}

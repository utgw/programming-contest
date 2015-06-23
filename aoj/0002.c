#include <stdio.h>
int main(){
  int a,b,i;
  while(scanf("%d%d\n",&a,&b)!=EOF){
    char c[10];
    sprintf(c,"%d",a+b);
    for(i=0;c[i]!='\0';i++);
    printf("%d\n",i);
  }
  return 0;
}

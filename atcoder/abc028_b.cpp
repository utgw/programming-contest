#include <stdio.h>
int main(){
  char input[102];
  int a=0,b=0,c=0,d=0,e=0,f=0;
  scanf("%s",input);
  for(int i=0;input[i]!='\0';i++){
    switch(input[i]) {
      case 'A':
        a++;
        break;
      case 'B':
        b++;
        break;
      case 'C':
        c++;
        break;
      case 'D':
        d++;
        break;
      case 'E':
        e++;
        break;
      case 'F':
        f++;
        break;
    }
  }
  printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
  return 0;
}

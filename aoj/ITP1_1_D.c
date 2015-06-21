#include <stdio.h>

int main(){
  int second,minute,hour;
  scanf("%d\n",&second);
  hour = second/3600;
  minute = second/60%60;
  second %= 60;
  printf("%d:%d:%d\n",hour,minute,second);
  return 0;
}

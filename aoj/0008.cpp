#include <stdio.h>
int main(){
  int n;
  while(scanf("%d",&n) != EOF){
    int result = 0;
    for(int a=0;a<=9;a++){
      for(int b=0;b<=9;b++){
        for(int c=0;c<=9;c++){
          if(n - (a+b+c) >= 0 && n - (a+b+c) <= 9) result++;
        }
      }
    }
    printf("%d\n",result);
  }
  return 0;
}
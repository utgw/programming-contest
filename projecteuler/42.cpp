#include <stdio.h>

bool isTriangle(int n){
  for(int i=0;;i++){
    int tr = i*(i+1)/2;
    if(n == tr) return true;
    if(n < tr) break;
  }
  return false;
}

int main(){
  char str[256];
  int tr = 0;
  while(scanf("%s",str) != EOF){
    int res = 0;
    for(int i=0;str[i]!='\0';i++) res += (int)str[i] - 64;
    if(isTriangle(res)) tr++;
  }
  printf("%d\n",tr);
  return 0;
}

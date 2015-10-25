#include <stdio.h>

int main(){
  int a[30];
  a[0]=1;
  a[1]=2;
  a[2]=4;
  for(int i=3;i<30;i++) a[i] = a[i-1] + a[i-2] + a[i-3];
  while(1){
    int n,res;
    res=1;
    scanf("%d",&n);
    if(n==0) break;
    res += a[n-1]/3650;
    printf("%d\n",res);
  }
  return 0;
}

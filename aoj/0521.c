#include <stdio.h>
int main(){
  const int coins[] = {500,100,50,10,5,1,0};
  int paid,i,j;
  while(1){
    int v = 1000;
    scanf("%d",&paid);
    if(paid==0)break;
    v -= paid;
    for(i=j=0;v>0;i++){
      while(v < coins[j])j++;
      v -= coins[j];
    }
    printf("%d\n",i);
  }
  return 0;
}

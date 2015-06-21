#include <stdio.h>

int main(){
  int a[3];
  int i,j,swap;
  scanf("%d%d%d\n",&a[0],&a[1],&a[2]);

  //sort
  for(i=0;i<3;i++){
    for(j=1;j<3-i;j++){
      if(a[j-1] > a[j]){
        swap = a[j-1];
        a[j-1] = a[j];
        a[j] = swap;
      }
    }
  }
  printf("%d %d %d\n",a[0],a[1],a[2]);
}

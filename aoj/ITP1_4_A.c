#include <stdio.h>
#include <stdlib.h>

int main(){
  double a,b;
  scanf("%lf%lf\n",&a,&b);
  printf("%d\n",(int)(a/b));
  printf("%ld\n",ldiv((int)a,(int)b).rem);
  printf("%lf\n",a/b);
  return 0;
}

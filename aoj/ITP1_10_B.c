#include <stdio.h>
#include <math.h>

int main(){
  const double pi = 3.1415926;
  double a,b,c,C,S,L,h;
  scanf("%lf%lf%lf",&a,&b,&C);
  C *= pi/180;
  c = sqrt(a*a+b*b-2*a*b*cos(C));
  S = a*b*sin(C)/2;
  L = a+b+c;
  h = 2*S/a;
  printf("%.13lf\n%.13lf\n%.13lf\n",S,L,h);
  return 0;
}

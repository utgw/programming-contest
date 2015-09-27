#include <stdio.h>

// 小数xを、小数第n位で四捨五入
double round(double x){
  int a = x * 10000;
  int b = a % 10;
  if(b < 5) a -= b;
  else a = a - b + 10;
  return (double)a/10000;
}

int main(){
  double a,b,c,d,e,f;
  while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f) != EOF){
    double x = (e*c-b*f)/(a*e-b*d);
    double y = (-c*d+a*f)/(a*e-b*d);
    printf("%.3lf %.3lf\n", round(x), round(y));
  }
  return 0;
}
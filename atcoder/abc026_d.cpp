// TODO
#include <cstdio>
#include <cmath>
#include <cstdlib>
int main(){
  const double pi = 3.141592653589;
  double a,b,c;
  double x = -1;
  scanf("%d%d%d",&a,&b,&c);
  auto f = [=](double t) -> double { return a*t+b*sin(c*t*pi)-100; };
  auto df = [=](double t) -> double { return a+b*c*pi*cos(c*t*pi); };
  while(abs(f(x))>1.0e-6) x = x - f(x)/df(x);
  printf("%.10lf\n",x);
  return 0;
}

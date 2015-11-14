#include <stdio.h>
#include <math.h>
int main(){
  int N,K;
  double res = 0;
  scanf("%d%d",&N,&K);
  // Kがない
  res += pow(N-1,3);
  // Kがmaxで、かつminが2つ
  res += 3*pow(K-1,2);
  // Kがminで、かつmaxが2つ
  res += 3*pow(N-K,2);
  res = 1.0 - res / pow(N,3);
  printf("%.15lf\n",res);
  return 0;
}

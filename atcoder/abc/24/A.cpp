#include <cstdio>
int main(){
  int a,b,c,k,s,t,price;
  scanf("%d%d%d%d\n",&a,&b,&c,&k);
  scanf("%d%d\n",&s,&t);
  price=a*s+b*t;
  if(s+t>=k)price-=c*(s+t);
  printf("%d\n",price);
  return 0;
}

#include <stdio.h>
typedef long long ll;

int main(){
  int n;
  ll fib[45];
  scanf("%d",&n);
  fib[0] = fib[1] = 1;
  for(int i=2;i<=n;i++)
    fib[i] = fib[i-1] + fib[i-2];
  printf("%lld\n", fib[n]);
  return 0;
}
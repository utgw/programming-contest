#include <cstdio>
using namespace std;

long gcd(long a,long b){
  return b!=0?gcd(b,a%b):a;
}

long lcm(long a,long b){
  return a*b/gcd(a,b);
}

int main(){
  long a,b;
  while(scanf("%ld%ld\n",&a,&b)!=EOF) printf("%ld %ld\n",gcd(a,b),lcm(a,b));
  return 0;
}

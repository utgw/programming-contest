#include <cstdio>
#define FOR(i,m,n) for(int i=m;i<(int)n;i++)
#define REP(i,n) FOR(i,0,n)

int main(){
  // Eratos
  const int MAX_N = 1000000;
  bool eratos[MAX_N];
  eratos[0] = eratos[1] = false;
  FOR(i,2,MAX_N) eratos[i] = true;
  for(int i=0;i*i<MAX_N;i++){
    if(eratos[i]){
      for(int j = i*i;j<MAX_N;j+=i){
        eratos[j] = false;
      }
    }
  }

  while(1){
    int a,d,m,n;
    int primes = 0;
    scanf("%d%d%d",&a,&d,&n);
    if(a==0&&d==0&&n==0)break;
    m = 1;
    while(primes < n){
      if(eratos[a+d*(m-1)])primes++;
      m++;
    }
    m-=1;
    printf("%d\n",a+d*(m-1));
  }
  return 0;
}

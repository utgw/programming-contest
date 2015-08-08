#include <cstdio>
#include <cmath>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define square(a) a*a

int sum(int n, int data[]){
  int res = 0;
  REP(i,n)res += data[i];
  return res;
}

double calculate(int k, int data[]){
  int msdata[1000];
  REP(i,k) msdata[i] = square(data[i]);
  double average = sum(k,data)/(double)k;
  double msaverage = sum(k,msdata)/(double)k;
  return sqrt(msaverage - square(average));
}

int main(){
  while(true){
    int n;
    int data[1000];
    scanf("%d",&n);
    if(n==0)break;
    REP(i,n) scanf("%d",&data[i]);
    printf("%.10lf\n",calculate(n,data));
  }
  return 0;
}

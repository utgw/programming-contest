#include <cstdio>
#define REP(i,n) for(int i=0;i<n;i++)
int main(void) {
  const int inf = 889464;
  while(1){
    int x,y,h,w;
    scanf("%d%d\n",&h,&w);
    if(h==0&&w==0)break;
    int dia=h*h+w*w;
    int diam=inf;
    REP(i,150){
      for(int j=1;j<i;j++){
        int a=i*i+j*j;
        if((dia<a||(dia==a&&j>h))&&a<=diam){
          y=j;
          x=i;
          diam=a;
        }
      }
    }
    printf("%d %d\n",y,x);
  }
  return 0;
}

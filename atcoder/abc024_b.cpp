//TODO
#include <cstdio>
int main(){
  int n,t,a,b;
  int ti=0;
  scanf("%d%d\n",&n,&t);
  b=0;
  for(int i=0;i<n;i++){
    scanf("%d",&a);
    if(a-b<=t&&i!=n-1)ti+=a-b;
    else ti+=t;
    b=a;
  }
  printf("%d\n",ti);
  return 0;
}

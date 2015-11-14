#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
  int n,a,b,i;
  int chokudai=0;
  if(scanf("%d%d%d",&n,&a,&b)==EOF)return -1;
  for(i=0;i<n;i++){
    char dr[5];
    int l,d;
    if(scanf("%s%d",dr,&l)==EOF)return -1;
    d=strcmp(dr,"East")==0?1:-1;
    if(l<a)chokudai+=a*d;
    else if(l>b)chokudai+=b*d;
    else chokudai+=l*d;
  }
  printf("%s%d\n",chokudai>0?"East ":chokudai<0?"West ":"",abs(chokudai));
  return 0;
}

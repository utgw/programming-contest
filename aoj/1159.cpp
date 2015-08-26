#include <cstdio>
#include <cstring>
#define REP(i,n) for(int i=0;i<(int)(n);i++)

int main(){
  while(true){
    int n,p,wan,i;
    int koishi[50];
    memset(koishi,0,sizeof(koishi));
    scanf("%d%d",&n,&p);
    if(n==0) break;
    wan = p;
    for(i=0;;i=(i+1)%n){
      if(wan == 0){
        if(koishi[i] != 0){
          wan = koishi[i];
          koishi[i] = 0;
        }
      }else{
        wan--;
        koishi[i]++;
        if(koishi[i] == p) break;
      }
    }
    printf("%d\n",i);
  }
  return 0;
}

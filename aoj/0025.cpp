#include <cstdio>
using namespace std;

int main(){
  while(true){
    int a[4];
    int b[4];
    int hit, blow;
    hit = blow = 0;
    if(scanf("%d%d%d%d\n",&a[0],&a[1],&a[2],&a[3])==EOF) break;
    scanf("%d%d%d%d\n",&b[0],&b[1],&b[2],&b[3]);

    for(int i=0;i<4;i++){
      // if hit
      if(a[i] == b[i]){
        hit++;
        continue;
      }
      for(int j=0;j<4;j++){
        if(i == j) continue;
        // if blow
        if(a[i] == b[j]){
          blow++;
        }
      }
    }
    printf("%d %d\n",hit,blow);
  }
  return 0;
}

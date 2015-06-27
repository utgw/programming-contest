#include <cstdio>
#include <functional>
#include <algorithm>
using namespace std;
int main(){
  while(1){
    int m,nmin,nmax;
    int maxgap,ans;
    ans=maxgap=-1;
    int score[200];
    scanf("%d%d%d\n",&m,&nmin,&nmax);
    if(m==0)break;
    for(int i=0;i<m;i++)scanf("%d\n",&score[i]);
    sort(score,score+m,greater<int>());
    for(int i=nmin-1;i<nmax;i++){
      int gap=score[i]-score[i+1];
      if(gap>=maxgap&&ans<i){
        ans=i;
        maxgap=gap;
      }
    }
    printf("%d\n",ans+1);
  }
}

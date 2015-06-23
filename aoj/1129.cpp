#include <cstdio>
#include <vector>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
int main(){
  while(1){
    vector<int> cards(50);
    int n,r;
    scanf("%d%d\n",&n,&r);
    if(n==0&&r==0)break;
    REP(i,n)cards[i]=n-i;
    REP(i,r){
      int p,c;
      scanf("%d%d",&p,&c);
      vector<int> swap(c);
      REP(j,c)swap[j]=cards[p+j-1]; // 指定された範囲のカードを抜き取る
      REP(j,p-1)cards[p+c-2-j]=cards[p-2-j]; // 抜き取った分のカードをずらす
      REP(j,c)cards[j]=swap[j]; // 先頭にカードを入れる
    }
    printf("%d\n",cards[0]);
  }
  return 0;
}

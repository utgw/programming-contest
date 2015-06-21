//TODO
#include <cstdio>
#include <cmath>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int n,m,input,now;
  int result;
  int distance[100000];
  int project[100000];

  scanf("%d%d\n",&n,&m);

  REP(i,n-1){
    scanf("%d\n",&input);
    distance[0] = 0;
    if(i==0) distance[1] = input;
    else distance[i+1] = distance[i] + input;
  }

  REP(i,m){
    scanf("%d\n",&input);
    project[i] = input;
  }

  result = now = 0;
  REP(i,m){
    result += abs(distance[now] - distance[now+project[i]]);
    now += project[i];
  }
  printf("%d\n",result);
  return 0;
}

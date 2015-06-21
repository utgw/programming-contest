#include <cstdio>
#include <cmath>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
  int n,m,input,now;
  int result;
  int distance[100000];

  scanf("%d%d\n",&n,&m);

  distance[0] = 0;
  REP(i,n-1){
    scanf("%d\n",&input);
    distance[i+1] = distance[i] + input;
  }

  result = now = 0;

  REP(i,m){
    scanf("%d\n",&input);
    result += abs(distance[now] - distance[now+input]);
    result %= 100000;
    now += input;
  }

  printf("%d\n",result);
  return 0;
}

#include <cstdio>
#include <queue>
using namespace std;
int main(){
  const double PI = 3.141592653589;
  int N;
  double S = 0;
  int sgn = 1;
  priority_queue<int> Q;

  scanf("%d",&N);
  for(int i=0;i<N;i++){
    int in;
    scanf("%d",&in);
    Q.push(in);
  }

  while(!Q.empty()){
    int r = Q.top();Q.pop();
    S += r*r*sgn;
    sgn *= -1;
  }
  S *= PI;
  printf("%.10lf\n",S);
  return 0;
}

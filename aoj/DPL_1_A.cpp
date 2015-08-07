// TODO
#include <cstdio>
#include <algorithm>
using namespace std;
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
const int MAX_N = 50001;
const int inf = 1000000000;
int N,M;
int C[20];

int ccp(){
  int T[MAX_N];
  REP(i,MAX_N) T[i] = inf;
  T[0] = 0;
  REP(i,M+2){
    FOR(j,C[i],N+1){
      T[j] = min(T[j],T[j-C[i]]+1);
    }
  }
  return T[N];
}

int main(){
  scanf("%d%d",&N,&M);
  REP(i,M)scanf("%d",&C[i]);
  printf("%d\n",ccp());
  return 0;
}

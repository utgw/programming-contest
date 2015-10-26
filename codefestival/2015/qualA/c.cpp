#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
typedef long long ll;
using namespace std;
const int MAX_N = 10001;

int N, T;
int homework[MAX_N][2];

int calculate(){
  ll sum = 0;
  int sub[MAX_N];
  int change = 0;
  REP(i,N){
    sum += homework[i][1];
    sub[i] = homework[i][0] - homework[i][1];
  }
  if(sum > T) return -1;
  sort(sub, sub + N);
  REP(i,N){
    if(sum + sub[i] <= T){
      sum += sub[i];
      change++;
    }
  }
  return N - change;
}

int main(){
  scanf("%d%d",&N,&T);
  REP(i,N)
    scanf("%d%d",&homework[i][0],&homework[i][1]);
  printf("%d\n", calculate());
  return 0;
}
#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
const int inf = 2147483647;
typedef long long ll;

int main(){
  int n;
  int minimum = inf, maximum = -inf;
  ll sum = 0;
  scanf("%d",&n);
  REP(i,n){
    int a;
    scanf("%d",&a);
    minimum = min(minimum,a);
    maximum = max(maximum,a);
    sum += a;
  }
  printf("%d %d %lld\n",minimum,maximum,sum);
  return 0;
}
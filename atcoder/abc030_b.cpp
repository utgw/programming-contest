#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  double la,sa,answer;
  scanf("%d%d",&n,&m);
  n %= 12;
  la = n * 30.0 + m * 0.5;
  sa = m * 6.0;
  if(abs(la - sa) > 180.0)
    answer = abs(la - sa) - 180.0;
  else
    answer = abs(la - sa);
  printf("%.4f\n",answer);
  return 0;
}
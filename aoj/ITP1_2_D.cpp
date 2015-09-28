#include <bits/stdc++.h>
using namespace std;

int main(){
  int W,H,x,y,r;
  scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
  if(x >= r && y >= r && W - r >= x && H - r >= y)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}
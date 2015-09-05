#include <iostream>
int main(){
  unsigned long long C[101][101];
  int cnt = 0;
  for(int i=0;i<101;i++)
    C[i][0] = C[i][i] = 1;
  for(int i=2;i<101;i++)
    for(int j=1;j<i;j++)
      C[i][j] = C[i-1][j-1] + C[i-1][j];
  for(int i=1;i<101;i++)
    for(int j=0;j<=i;j++)
      if(C[i][j] > 1000000) cnt++;
  std::cout << cnt << std::endl;
  return 0;
}
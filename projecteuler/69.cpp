#include <iostream>
using namespace std;

bool isprime(int n){
  if(n <= 1) return false;
  if(n == 2) return true;
  for(int i=2;i*i<=n;i++)
    if(n % i == 0) return false;
  return true;
}

int main(){
  int res = 1;
  for(int i=2;res*i<=1000000;++i)
    if(isprime(i)) res *= i;
  for(int i=2;res*i<=1000000;++i)
    res *= i;
  cout << res << endl;
  return 0;
}

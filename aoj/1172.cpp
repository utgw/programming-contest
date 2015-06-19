#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

bool isprime(int i){
  if(i <= 1) return false;
  if(i == 2) return true;
  for(int j=2;j<=(int)sqrt(i);j++){
    if(i%j==0) return false;
  }
  return true;
}

int main(){
  int primes[300000];
  primes[0] = 0;
  for(int i=1;i<300000;i++){
    if(isprime(i)){
      primes[i] = primes[i-1] + 1;
    }else{
      primes[i] = primes[i-1];
    }
  }

  while(true){
    int n;
    cin >> n;
    if(n == 0) break;
    cout << primes[2*n]-primes[n] << endl;
  }
  return 0;
}

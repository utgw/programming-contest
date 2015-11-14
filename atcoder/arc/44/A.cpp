#include <iostream>
using namespace std;
typedef unsigned long long ll;

ll gcm(ll a, ll b){
  if(a < b) return gcm(b, a);
  return (b == 0) ? a : gcm(b, a%b);
}

bool isprime(ll n){
  if(n == 1) return false;
  if(n == 2) return true;
  if(gcm(n, 30) == 1) return true;
  for(ll i=2;i*i<n;i++){
    if(n%i == 0)
      return false;
  }
  return true;
}

int main(){
  ll N;
  cin >> N;
  if(isprime(N))
    cout << "Prime" << endl;
  else
    cout << "Not Prime" << endl;
  return 0;
}
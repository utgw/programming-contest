#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main(){
  string A;
  ll B;
  ll len;
  cin >> A >> B;
  len = A.size();
  cout << A[(B-1)%len] << endl;
  return 0;
}
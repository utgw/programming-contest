#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main(){
  string A;
  cin >> A;
  for(int i=0;i<(int)(A.size());i++){
    if(i == 0)
      cout << (char)toupper(A[i]);
    else
      cout << (char)tolower(A[i]);
  }
  cout << endl;
  return 0;
}
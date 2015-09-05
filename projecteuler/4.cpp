#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(int num){
  std::string numstr = std::to_string(num);
  int numberOfDigits = numstr.size();
  for(int i=0;i<numberOfDigits/2;i++)
    if(numstr[i] != numstr[numberOfDigits-i-1]) return false;
  return true;
}

int main(){
  int res = 0;
  for(int a=100;a<1000;a++){
    for(int b=100;b<1000;b++){
      int c = a*b;
      if(isPalindrome(c))
        res = std::max(res, c);
    }
  }
  std::cout << res << std::endl;
  return 0;
}
#include <iostream>
#include <string>
using namespace std;

bool whichkey(char s){
  const string leftkeys = "qwertasdfgzxcvb";
  return leftkeys.find_first_of(s) != string::npos;
  // if true, s is in leftkeys
}

int main(){
  while(true){
    string str;
    cin >> str;
    if(str == "#") break;
    bool now = whichkey(str[0]);
    int count = 0;
    for(int i=0;i<str.size();i++){
      if(whichkey(str[i]) != now){
        now = whichkey(str[i]);
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}

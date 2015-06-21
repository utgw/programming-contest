#include <cstdio>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
  while(true){
    bool valid = true;
    string str;
    stack<bool> st;

    getline(cin,str);
    if(str==".") break;
    for(char ch:str){
      if(ch == '(') st.push(true);
      else if(ch == '[') st.push(false);
      else if(ch == ')'){
        if(st.size() == 0 || !st.top()){
          valid = false;
          break;
        }else st.pop();
      }else if(ch == ']'){
        if(st.size() == 0 || st.top()){
          valid = false;
          break;
        }else st.pop();
      }
    }
    if(valid && st.empty()) printf("yes\n");
    else printf("no\n");
  }
  return 0;
}

#include <cstdio>
#include <stack>
#include <queue>
using namespace std;
int main(){
  char str[6];
  stack<char> block;
  queue<char> removed;
  while(1){
    gets(str);
    if(str[0]=='q') break;
    else if(str[1]=='u') block.push(str[5]);
    else if(str[1]=='o'){
      removed.push(block.top());
      block.pop();
    }
  }
  for(;!removed.empty();removed.pop()) printf("%c\n",removed.front());
  return 0;
}

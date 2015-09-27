#include <queue>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef long long ll;

int main(){
  priority_queue<ll> Q;
  char operation[100];
  while(1){
    gets(operation);
    if(operation[0] == 'i'){
      int a;
      sscanf(operation, "insert %d", &a);
      Q.push(a);
    }else{
      if(strcmp(operation, "extract") == 0){
        printf("%d\n", Q.top());
        Q.pop();
      }else
        break;
    }
  }
  return 0;
}
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]){
  char buffer[256];
  stack<int> st;
  int a, b;

  while(scanf("%s",buffer)!=EOF){
    switch(buffer[0]){
      case '+':
        a = st.top();
        st.pop();
        b = st.top();
        st.pop();
        st.push(a+b);
        break;
      case '-':
        a = st.top();
        st.pop();
        b = st.top();
        st.pop();
        st.push(a-b);
        break;
      case '*':
        a = st.top();
        st.pop();
        b = st.top();
        st.pop();
        st.push(a*b);
        break;
      case '/':
        a = st.top();
        st.pop();
        b = st.top();
        st.pop();
        st.push(a/b);
        break;
      default:
        st.push(atoi(buffer));
        break;
    }
  }
  printf("%d\n", st.top());
  return 0;
}
#include <sstream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <stack>
using namespace std;
vector<string> split(const string &str, char delimiter){
  istringstream stream(str);
  string buffer;
  vector<string> res;
  while(getline(stream,buffer,delimiter)) res.push_back(buffer);
  return res;
}
int main(){
  char str[100];
  while(gets(str)!=NULL){
    stack<double> st;
    double a,b;
    for(string s:split(str,' ')){
      if(s=="+"){
        a = st.top(); st.pop();
        b = st.top(); st.pop();
        st.push(b+a);
      }else if(s=="-"){
        a = st.top(); st.pop();
        b = st.top(); st.pop();
        st.push(b-a);
      }else if(s=="*"){
        a = st.top(); st.pop();
        b = st.top(); st.pop();
        st.push(b*a);
      }else if(s=="/"){
        a = st.top(); st.pop();
        b = st.top(); st.pop();
        st.push(b/a);
      }else st.push(atoi(s.c_str()));
    }
    printf("%lf\n",st.top());
    memset(str,'\0',sizeof(str));
  }
}

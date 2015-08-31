#include <iostream>
#include <cctype>
#include <string>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

string s;
int p;

int number(){
  int a = (int)(s[p++]-'0');
  while(isdigit(s[p])) a = a*10+(int)(s[p++]-'0');
  return a;
}

int expr();

int fact(){
  if(isdigit(s[p])) return number();
  p++;
  int a = expr();
  p++;
  return a;
}

int term(){
  int a = fact();
  int b;
  while(s[p] == '*'||s[p] == '/'){
    if(s[p] == '*'){
      p++;
      b = fact();
      a *= b;
    }
    if(s[p] == '/'){
      p++;
      b = fact();
      a /= b;
    }
  }
  return a;
}

int expr(){
  int a = term();
  int b;
  while(s[p] == '+' || s[p] == '-'){
    if(s[p] == '+'){
      p++;
      b = term();
      a += b;
    }
    if(s[p] == '-'){
      p++;
      b = term();
      a -= b;
    }
  }
  return a;
}

int parse(){
  p = 0;
  return expr();
}

int main(){
  int n;
  cin >> n;
  REP(i,n){
    cin >> s;
    cout << parse() << endl;
  }
  return 0;
}

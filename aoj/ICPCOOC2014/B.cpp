#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int ipow(int a, int b){ // a^b
  if(b == 0) return 1;
  else if(b % 2 == 0) return ipow(a,b/2) * ipow(a,b/2);
  else return a * ipow(a,b-1);
}

// global
int pos;

int number(const string S){
  int answer = 0;
  for(int i=0;S[pos]!='+'&&S[pos]!='*'&&pos<S.size();pos++,i++)
    answer += (int)(S[pos] - '0') * ipow(10,i);
  return answer;
}

int calc_l(const string S){
  int answer;
  pos = 0;
  for(;pos<(S.size());){
    if(S[pos] == '+'){
      pos++;
      answer += number(S);
    }else if(S[pos] == '*'){
      pos++;
      answer *= number(S);
    }else{
      answer = number(S);
    }
  }
  return answer;
}

int calc_m(const string S){
  int answer = 0;
  pos = 0;
  for(;pos<(S.size());){
    int a = number(S);
    while(S[pos] == '*'){
      pos++;
      int b = number(S);
      a *= b;
    }
    answer += a;
    pos++;
  }
  return answer;
}

int main(void){
  string S;
  cin >> S;
  int A;
  cin >> A;
  int ma = calc_m(S);
  //cout << ma << endl;
  bool M = ma == A;
  int la = calc_l(S);
  //cout << la << endl;
  bool L = la == A;
  if(M && !L)
    cout << "M" << endl;
  else if(!M && L)
    cout << "L" << endl;
  else if(M && L)
    cout << "U" << endl;
  else
    cout << "I" << endl;
  return 0;
}
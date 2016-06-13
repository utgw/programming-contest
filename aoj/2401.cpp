#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i = (m); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

string S;
int ptr;
int vari[11];

int formula(){
  char ch = S[ptr];
  // cout<<ch;
  if(ch == 'T')
    return 1;
  else if(ch == 'F')
    return 0;
  else if(ch >= 'a' && ch <= 'k')
    return vari[(int)(ch-'a')];
  else if(ch == '-'){
    ptr++;
    return 1 - formula();
  }else if(ch == '('){
    int kind;
    ptr++;
    int lhs = formula();
    ptr++;
    // cout<<S[ptr];
    char sgn = S[ptr];
    if(sgn=='-'){
      kind = 2;
      ptr++;
      // cout<<S[ptr];
    }else if(sgn == '+'){
      kind = 1;
    }else{
      kind = 0;
    }
    ptr++;
    int rhs = formula();
    ptr++;
    // cout<<S[ptr];
    if(kind == 0){
      return min(lhs, rhs);
    }else if(kind == 1){
      return max(lhs, rhs);
    }else{
      return max(1-lhs, rhs);
    }
  }
}

bool parse(){
  char maxch='a';
  REP(i,S.size()){
    if(isalpha(S[i])){
      if(S[i]!='T'&&S[i]!='F'){
        maxch=max(maxch,S[i]);
      }
    }
  }
  // cout << maxch << endl;
  memset(vari,0,sizeof vari);
  REP(i,1<<(int)(maxch-'a'+1)){
  // REP(i,1){
    int cnt=0;
    // cout << i << endl;
    for(int j = i; j > 0; j >>= 1){
      if(j&1)
        vari[cnt] = 1;
      else
        vari[cnt] = 0;
      cnt++;
    }
    // REP(j,11){
    //   cout<<vari[j]<<" ";
    // }
    // cout<<endl;
    ptr = 0;
    int lhs = formula();
    ptr++;
    ptr++;
    int rhs = formula();
    if(lhs!=rhs)return false;
  }
  return true;
}

int main(void){
  while(cin >> S, S != "#"){
    if(parse())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}

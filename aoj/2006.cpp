#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
int main(void){
  string chars[]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  int N;cin>>N;
  REP(i,N){
    int now=0;
    int sel=0;
    string input;cin>>input;
    string buffer="";
    REP(j,input.size()){
      if(input[j]=='0')if(buffer.size()){
        cout<<chars[buffer[0]-'0'][(buffer.size()-1)%(chars[buffer[0]-'0']).size()];
        buffer="";
      }
      else
        buffer+=input[j];
    }
    cout<<endl;
  }
  return 0;
}

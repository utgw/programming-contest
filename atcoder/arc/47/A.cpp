#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,L;
  string S;
  cin>>N>>L>>S;
  int tab=0,result=0;
  for(char ch:S){
    if(ch=='+'){
      tab++;
      if(tab==L){
        tab=0;
        result++;
      }
    }else tab--;
  }
  cout<<result<<endl;
  return 0;
}
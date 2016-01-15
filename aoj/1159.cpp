#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(void){
  int n,p;
  while(cin>>n>>p,n!=0&&p!=0){
    int wan=p;
    vector<int> cds(n,0);
    for(int i=0;;i=(i+1)%n){
      if(wan==0){
        if(cds[i]!=0){
          wan = cds[i];
          cds[i]=0;
        }
      }else{
        wan--;
        cds[i]++;
        if(cds[i]==p){
          cout<<i<<endl;
          break;
        }
      }
    }
  }
  return 0;
}
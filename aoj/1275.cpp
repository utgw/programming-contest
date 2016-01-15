#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int main(void){
  int n,k,m;
  while(cin>>n>>k>>m,n!=0){
    int now=m-1;
    vector<bool> removed(n,false);
    REP(i,n-1){
      removed[now]=true;
      REP(j,k){
        now=(now+1)%n;
        while(removed[now])now=(now+1)%n;
      }
    }
    cout<<now+1<<endl;
  }
  return 0;
}
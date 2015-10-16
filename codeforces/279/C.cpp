#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define RFOR(i,m,n) for(int i=m;i>=(n);i--)
#define REP(i,n) FOR(i,0,n)
using namespace std;
typedef long long ll;

bool search(vector<int> a, int left, int right){
  left -= 1;
  right -= 1;
  bool incr = true;
  FOR(i,left,right){
    if(incr){
      if(a[i] > a[i+1])
        incr = false;
    }else{
      if(a[i] < a[i+1])
        return false;
    }
  }
  return true;
}

int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  vector<int> a(n);
  REP(i,n)
    scanf("%d",&a[i]);
  REP(i,m){
    int l,r;
    scanf("%d%d",&l,&r);
    if(search(a,l,r))
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}
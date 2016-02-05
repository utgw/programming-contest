#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  int n;
  while(cin>>n){
    int result = 0;
    for(int a=0;a<=9;a++){
      for(int b=0;b<=9;b++){
        for(int c=0;c<=9;c++){
          if(n - (a+b+c) >= 0 && n - (a+b+c) <= 9) result++;
        }
      }
    }
    cout<<result<<endl;
  }
  return 0;
}

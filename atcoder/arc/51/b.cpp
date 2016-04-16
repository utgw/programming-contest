#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef unsigned long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  int k;cin>>k;
  // int m=0;
  // FOR(b,1,10000000)FOR(a,b,10000000){
  //   int count=0;
  //   int c=a,d=b;
  //   while(d>0){
  //     int e=c;
  //     c=d;
  //     d=e%d;
  //     count++;
  //   }
  //   if(count>m){
  //     cout<<a<<","<<b<<"->"<<count<<endl;
  //     m=count;
  //   }
  // }
  ll fib[42];
  fib[0]=fib[1]=1;
  FOR(i,2,42)fib[i]=fib[i-1]+fib[i-2];
  cout<<fib[k+1]<<" "<<fib[k]<<endl;
  // REP(i,42)cout<<fib[i]<<endl;
  return 0;
}

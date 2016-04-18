#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  int n;cin>>n;
  int card[6]={1,2,3,4,5,6};
  REP(i,n%30){
    // REP(i,6)cout<<card[i];
    // cout<<endl;
    swap(card[i%5],card[i%5+1]);
  }
  REP(i,6)cout<<card[i];
  cout<<endl;
  return 0;
}

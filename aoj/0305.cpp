#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);
const int di[][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

int main(void){
  int n;cin>>n;
  REP(i,n){
    int r,t;cin>>r>>t;
    vector<int> results;
    if(t%30==0){
      if(r%100==0){
        results.push_back(r/100+t/6);
      }else{
        results.push_back(r/100+t/6);
        results.push_back(r/100+t/6+1);
      }
    }else{
      if(r%100==0){
        results.push_back(r/100+t/30*5);
        results.push_back(r/100+t/30*5+5);
      }else{
        results.push_back(r/100+t/30*5);
        results.push_back(r/100+t/30*5+5);
        results.push_back(r/100+t/30*5+1);
        results.push_back(r/100+t/30*5+6);
      }
    }
    sort(ALL(results));
    REP(j,results.size()){
      cout<<results[j];
      if(j==results.size()-1)cout<<endl;
      else cout<<" ";
    }
  }
  return 0;
}

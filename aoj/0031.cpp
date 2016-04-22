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
  int n;
  while(cin>>n){
    vector<int> answer;
    for(int i=0;n;n>>=1,i++){
      if(n&1)answer.push_back(1<<i);
    }
    REP(i,answer.size()){
      cout<<answer[i];
      if(i!=answer.size()-1)cout<<" ";
      else cout<<endl;
    }
  }
  return 0;
}

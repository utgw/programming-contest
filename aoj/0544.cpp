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
  int n,m;
  while(cin>>n>>m,n){
    vector<int> masu(n);
    vector<int> dice(m);
    REP(i,n)cin>>masu[i];
    REP(i,m)cin>>dice[i];
    int answer=0,now=0;
    while(now<n-1){
      now+=dice[answer++];
      now+=masu[now];
    }
    cout<<answer<<endl;
  }
  return 0;
}

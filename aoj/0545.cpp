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
    vector<vector<int>> e(n);
    REP(i,m){
      int a,b;cin>>a>>b;
      e[a-1].push_back(b-1);
      e[b-1].push_back(a-1);
    }
    int ans=-1;
    queue<pair<int,int>> next;
    next.push(make_pair(0,0));
    vector<bool> visited(n,false);
    while(!next.empty()){
      auto a=next.front();next.pop();
      int p=a.first,d=a.second;
      // cout<<p<<","<<d<<endl;
      if(visited[p]||d>2)continue;
      visited[p]=true;
      ans++;
      REP(i,e[p].size()){
        if(!visited[e[p][i]])next.push(make_pair(e[p][i],d+1));
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

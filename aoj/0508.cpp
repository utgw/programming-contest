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
  while(cin>>n,n){
    vector<vector<int>> e(100);
    REP(i,n){
      int a,b;cin>>a>>b;
      e[a-1].push_back(b-1);
      e[b-1].push_back(a-1);
    }
    REP(i,100)sort(ALL(e[i]));
    int ans=0;
    REP(i,100){
      if(e[i].empty())continue;
      stack<pair<int,int>> next;
      next.push(make_pair(i,1));
      vector<bool> visited(100,false);
      while(!next.empty()){
        auto a=next.top();next.pop();
        int p=a.first,d=a.second;
        ans=max(ans,d);
        if(visited[p])continue;
        visited[p]=true;
        for(int j:e[p]){
          if(!visited[j])next.push(make_pair(j,d+1));
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

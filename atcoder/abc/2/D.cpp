#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

int main(void){
  int N,M; cin >> N >> M;
  vector<vector<int>> rel(N);
  REP(i,M){
    int x,y; cin >> x >> y;
    rel[x-1].push_back(y-1);
  }
  if(M == 0){
    cout << 1 << endl;
    return 0;
  }
  sort(ALL(rel));
  int answer = 1;
  REP(i,N){
    int candidate = 1;
    vector<bool> visited(N,false);
    visited[0] = true;
    queue<int> Q;
    
    Q.push(i);
    while(!Q.empty()){
      int from = Q.front(); Q.pop();
      for(int to : rel[from]){
        if(!visited[to]){
          Q.push(to);
          candidate++;
        }
      }
    }
    answer = max(answer,candidate);
  }
  cout << answer << endl;
  return 0;
}
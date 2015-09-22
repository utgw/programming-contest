#include <iostream>
#include <queue>
using namespace std;
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)

int main(){
  int N;
  int b = -1;
  int res = 0;
  priority_queue<int> q;
  cin >> N;
  REP(i,N){
    int a;
    cin >> a;
    q.push(a);
  }
  REP(i,N){
    if(b == q.top()) res++;
    b = q.top(); q.pop();
  }
  cout << res << endl;
  return 0;
}
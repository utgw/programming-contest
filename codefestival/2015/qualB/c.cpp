#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> A(N), B(M);
  REP(i,N) cin >> A[i];
  REP(i,M) cin >> B[i];
  if(N < M){
    cout << "NO" << endl;
    return 0;
  }
  sort(ALL(A),greater<int>());
  sort(ALL(B),greater<int>());
  REP(i,M){
    if(A[i] < B[i]){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
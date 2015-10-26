#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;

int main(){
  int N,M,a,current;
  cin >> N >> M;
  vector<int> A(N);
  int s = N/2;
  int ans = 0;
  int cnt = 0;
  int c = 0;
  REP(i,N) cin >> A[i];
  sort(ALL(A));
  REP(i,M+1){
    c = upper_bound(ALL(A), i) - lower_bound(ALL(A), i);
    if(c > cnt){
      cnt = c;
      ans = i;
    }
    c = 0;
  }
  if(cnt > s)
    cout << ans << endl;
  else
    cout << "?" << endl;
  return 0;
}
#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;

int main(void){
  int N;
  cin >> N;
  vector<int> a(N);
  REP(i,N)
    cin >> a[i];
  vector<int> cost(N);
  cost[1] = abs(a[1] - a[0]);
  FOR(i,2,N)
    cost[i] = min(cost[i - 1] + abs(a[i] - a[i - 1]),
                  cost[i - 2] + abs(a[i] - a[i - 2]));
  cout << cost[N - 1] << endl;
  return 0;
}

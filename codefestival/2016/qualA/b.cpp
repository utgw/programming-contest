#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n) {
    cin >> a[i];
  }
  int ans = 0;
  REP(i, n) {
    if (a[a[i] - 1] == i + 1)
      ans++;
  }
  cout << ans / 2 << endl;
  return 0;
}

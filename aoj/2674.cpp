// TODO
#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;

int main(){
  int D; cin >> D;
  vector<int> x(D);
  REP(i,D) cin >> x[i];
  int data[100000];
  int Q;
  cin >> Q;
  REP(i,Q){
    int l, r, e; cin >> l >> r >> e;
    int a = min(x[l-1], x[r-1]);
    int b = max(x[l-1], x[r-1]);
    int length = r - l + 1;
    REP(k,length) data[k] = x[i+k-i];
    sort(data, data+length);
    int result = 0;
    if(data[0] < a - e)
      result += lower_bound(data, data+length, a-e) - data;
    if(data[length-1] > b + e)
      result += (data+length) - upper_bound(data, data+length, b+e);
    cout << result << endl;
  }
  return 0;
}

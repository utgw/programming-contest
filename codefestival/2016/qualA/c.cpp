#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

// aにするのに必要な操作回数
int alpha_distance (char const al) {
  return (int)(('a' - al + 26) % 26);
}

// 操作をする
char roll (char const al, int num) {
  return (al + num - 'a') % 26 + 'a';
}

int main(void){
  string s;
  cin >> s;
  int k;
  cin >> k;
  REP (i, s.size()) {
    if (i == (int)s.size() - 1)
      cout << roll(s[i], k);
    else if (k >= alpha_distance(s[i])) {
      cout << roll(s[i], alpha_distance(s[i]));
      k -= alpha_distance(s[i]);
    } else {
      cout << s[i];
    }
  }
  cout << endl;
  return 0;
}

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
  int n;cin>>n;
  REP(i,n){
    string s;cin>>s;
    set<string> poyo;
    FOR(j,1,s.size()){
      string a=s.substr(0,j),b=s.substr(j);
      string ra(a),rb(b);
      reverse(ALL(ra));
      reverse(ALL(rb));
      poyo.insert(a+b);
      poyo.insert(ra+b);
      poyo.insert(a+rb);
      poyo.insert(ra+rb);
      poyo.insert(b+a);
      poyo.insert(b+ra);
      poyo.insert(rb+a);
      poyo.insert(rb+ra);
    }
    cout<<poyo.size()<<endl;
  }
  return 0;
}

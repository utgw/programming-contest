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
  string s;
  getline(cin, s);
  REP(i,s.size()){
    if(s[i]>='a'&&s[i]<='z')cout<<(char)(s[i]+'A'-'a');
    else cout<<s[i];
  }
  cout<<endl;
  return 0;
}

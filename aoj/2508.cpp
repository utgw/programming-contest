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
  int n;
  vector<char> station(52);
  REP(i,26)station[i]='A'+i;
  REP(i,26)station[i+26]='a'+i;
  while(cin>>n,n){
    vector<int> k(n);
    REP(i,n)cin>>k[i];
    string s;cin>>s;
    REP(i,s.size()){
      int key=i%n;
      char moto=s[i];
      int poyo;
      if(isupper(moto))poyo=moto-'A';
      else poyo=moto-'a'+26;
      cout<<station[(poyo-k[key]+104)%52];
    }
    cout<<endl;
  }
  return 0;
}

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

bool is_prime(int n){
  if(n<=1)return false;
  if(n==2)return true;
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
  return true;
}

int main(void){
  int n,p;
  while(cin>>n>>p,n>=0){
    vector<int> ps;
    for(int i=n+1;ps.size()<p;i++){
      if(is_prime(i))ps.push_back(i);
    }
    vector<int> pss;
    REP(i,ps.size())FOR(j,i,ps.size())pss.push_back(ps[i]+ps[j]);
    sort(ALL(pss));
    cout<<pss[p-1]<<endl;
  }
  return 0;
}

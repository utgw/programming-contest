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
  int N;cin>>N;
  vector<pair<int,string>> city(N);
  int s=0;
  REP(i,N){
    string name;int num;
    cin>>name>>num;
    city[i]=make_pair(num,name);
    s+=num;
  }
  sort(ALL(city),greater<pair<int,string>>());
  s/=2;
  if(city[0].first>s)cout<<city[0].second<<endl;
  else cout<<"atcoder"<<endl;
  return 0;
}

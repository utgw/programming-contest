#include<iostream>
#include<complex>
#include<vector>
#include<algorithm>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<int> P;
const ll inf = 114514810;
const ld eps = 1e-8;
const double pi = acos(-1.0);
int d[2048][2048]; 

int main(void){
  int N;cin>>N;
  vector<P> ps;
  REP(i,N){
    int x,y;cin>>x>>y;
    ps.push_back(P(x,y));
  }
  //REP(i,N)cout<<ps[i].real()<<" "<<ps[i].imag()<<endl;
  REP(i,N)REP(j,N)d[i][j]=norm(ps[i]-ps[j]);
  int ei=0,cho=0,don=0;
  REP(i,N)FOR(j,i+1,N)FOR(k,j+1,N){
    int da=d[i][j],db=d[j][k],dc=d[i][k];
    int longest=max({da,db,dc});
    //cout<<dis[0]<<" "<<dis[1]<<" "<<dis[2]<<endl;
    if(2*longest==da+db+dc)cho++;
    else if(2*longest<da+db+dc)ei++;
    else if(2*longest>da+db+dc)don++;
  }
  cout<<ei<<" "<<cho<<" "<<don<<endl;
  return 0;
}

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
  int n,m;cin>>n>>m;
  vector<int> tx(n),ty(n);
  REP(i,n)cin>>tx[i]>>ty[i];
  vector<int> txd(tx),tyd(ty);
  sort(ALL(tx));
  sort(ALL(ty));
  map<int,int> xtr,ytr;
  REP(i,n){
    xtr[tx[i]]=i+1;
    ytr[ty[i]]=i+1;
  }
  xtr[-1e9-1]=ytr[-1e9-1]=0;
  xtr[1e9+1]=ytr[1e9+1]=n+1;
  vector<vector<int>> trs(n+2,vector<int>(n+2,0));
  REP(i,n)trs[xtr[txd[i]]][ytr[tyd[i]]]++;
  vector<vector<int>> dp(n+2,vector<int>(n+2,0));
  FOR(i,1,n+2)FOR(j,1,n+2)dp[i][j]=dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1]+trs[i][j];
  REP(i,m){
    int sx,sy,ex,ey;
    cin>>sx>>sy>>ex>>ey;
    int offset_x=xtr.lower_bound(sx)->second-1;
    int offset_y=ytr.lower_bound(sy)->second-1;
    int dest_x=xtr.upper_bound(ex)->second-1;
    int dest_y=ytr.upper_bound(ey)->second-1;
    // int offset_x=xtr.lower_bound(sx)->first;
    // int offset_y=ytr.lower_bound(sy)->first;
    // int dest_x=xtr.lower_bound(ex)->first;
    // int dest_y=ytr.lower_bound(ey)->first;
    // cout<<offset_x<<","<<offset_y<<endl;
    // cout<<dest_x<<","<<dest_y<<endl;
    cout<<dp[dest_x][dest_y]-dp[offset_x][dest_y]-dp[dest_x][offset_y]+dp[offset_x][offset_y]<<endl;
  }
  return 0;
}

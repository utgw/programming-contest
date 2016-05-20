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
  int m;cin>>m;
  vector<vector<ll>> dist(n,vector<ll>(n,inf));
  REP(i,m){
    int a,b,c,d;
    scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
    dist[a-1][b-1]=c;
    dist[b-1][a-1]=d;
  }
  int x1,x2,y1,y2;
  scanf("%d,%d,%d,%d\n",&x1,&x2,&y1,&y2);
  x1-=1;
  x2-=1;
  REP(k,n)REP(i,n)REP(j,n)dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
  cout<<y1-y2-dist[x1][x2]-dist[x2][x1]<<endl;
  return 0;
}

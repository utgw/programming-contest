#include <cstdio>
#include <vector>
#include <utility>
#define REP(i,n) for(int i=0;i<(int)n;i++)
using namespace std;

int main(){
  while(1){
    int n,m,a;
    int res[100];
    vector<vector<pair<int,int> > > v(1000);
    scanf("%d%d%d",&n,&m,&a);
    if(n==0)break;
    REP(i,n)res[i]=i+1;
    REP(i,m){
      int h,p,q;
      scanf("%d%d%d",&h,&p,&q);
      v[h-1].push_back(make_pair(p-1,q-1));
    }
    REP(i,1000)REP(j,v[i].size())swap(res[v[i][j].first],res[v[i][j].second]);
    printf("%d\n",res[a-1]);
  }
  return 0;
}

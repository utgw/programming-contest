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

struct post{
  string content;
  int parent;
  vector<int> children;
};

void output(int i,int depth,vector<post>& bbs){
  REP(j,depth)cout<<".";
  cout<<bbs[i].content<<endl;
  for(auto& child:bbs[i].children){
    output(child,depth+1,bbs);
  }
}

int main(void){
  int n;cin>>n;
  vector<post> bbs(n);
  REP(i,n){
    int a;string s;
    cin>>a>>s;
    bbs[i].content=s;
    bbs[i].parent=-1;
    if(a>0){
      bbs[i].parent=a-1;
      bbs[a-1].children.push_back(i);
    }
  }
  REP(i,n){
    if(bbs[i].parent==-1){
      output(i,0,bbs);
    }
  }
  return 0;
}

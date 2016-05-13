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
  while(cin>>n,n){
    vector<int> a(n+1);
    REP(i,n+1)cin>>a[i];
    vector<int> s(n);
    REP(i,n)s[i]=a[i+1]-a[i];
    int ans=0;
    REP(i,n-3){
      // i is wrong
      if(s[i+1]==s[i+2]&&s[i+2]==s[i+3]&&s[i]!=s[i+1])ans=a[i];
      // i+1 is wrong
      if(s[i+2]==s[i+3]&&s[i]!=s[i+2]&&s[i+1]!=s[i+2])ans=a[i+1];
      // i+2 is wrong
      if(s[i]==s[i+3]&&s[i+1]!=s[i]&&s[i+2]!=s[i])ans=a[i+2];
      // i+3 is wrong
      if(s[i]==s[i+1]&&s[i+2]!=s[i]&&s[i+3]!=s[i])ans=a[i+3];
      // i+4 is wrong
      if(s[i]==s[i+1]&&s[i+1]==s[i+2]&&s[i]!=s[i+3])ans=a[i+4];
    }
    cout<<ans<<endl;
  }
  return 0;
}

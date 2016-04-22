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
  REP(i,n){
    string s;cin>>s;
    string answer="";
    vector<bool> visited(26);
    REP(j,s.size()){
      if(j==0){
        answer+=s[0];
        visited[s[0]-'a']=true;
        j+=2;
        continue;
      }
      if(!visited[s[j]-'a']){
        if(s[j-1]=='>'){
          answer+=s[j];
        }else{
          answer=s[j]+answer;
        }
        visited[s[j]-'a']=true;
      }
      j+=2;
    }
    cout<<answer<<endl;
  }
  return 0;
}

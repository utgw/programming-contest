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

set<string> parse(string key,set<string>& members,map<string,set<string>>& groups){
  set<string> result;
  for(auto name:members){
    if(groups.find(name)!=groups.end()){
      for(auto str:parse(name,groups[name],groups)){
        result.insert(str);
      }
    }else{
      result.insert(name);
    }
  }
  return result;
}

int calculate(map<string,set<string>>& groups,string& target){
  set<string> result;
  for(auto& str:parse(groups.find(target)->first,groups.find(target)->second,groups)){
    result.insert(str);
  }
  return result.size();
}

int main(void){
  int n;
  while(cin>>n,n){
    map<string,set<string>> groups;
    string searchingpoe="";
    REP(i,n){
      string s;cin>>s;
      int ptr;
      string groupname="";
      for(ptr=0;s[ptr]!=':';++ptr){
        groupname+=s[ptr];
      }
      if(searchingpoe=="")searchingpoe=groupname;
      ++ptr;
      while(ptr<s.size()){
        string membername="";
        for(;s[ptr]!=','&&s[ptr]!='.';++ptr){
          membername+=s[ptr];
        }
        groups[groupname].insert(membername);
        ++ptr;
      }
    }
    cout<<calculate(groups,searchingpoe)<<endl;
  }
  return 0;
}

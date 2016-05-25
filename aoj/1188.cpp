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

int ptr;

int number(string &s){
  int ans=0;
  while(isdigit(s[ptr])){
    // cerr<<s[ptr];
    ans=10*ans+(int)(s[ptr]-'0');
    ptr++;
  }
  return ans;
}

int field(string& s){
  int ans=0;
  vector<int> candid;
  // cerr<<s[ptr];
  ptr++;
  if(s.substr(ptr,2)=="[["){
    while(s.substr(ptr,2)=="[["){
      int poyo=field(s);
      candid.push_back(poyo);
    }
    sort(ALL(candid));
    REP(i,candid.size()/2+1){
      int poe=candid[i];
      ans+=poe;
    }
  }else{
    while(s[ptr]=='['){
      // cerr<<s[ptr];
      ptr++;
      candid.push_back(number(s));
      // cerr<<s[ptr];
      ptr++;
    }
    sort(ALL(candid));
    REP(i,candid.size()/2+1){
      int poe=candid[i]/2+1;
      // cout<<poe<<endl;
      ans+=poe;
    }
    // cout<<endl;
    // cerr<<s[ptr];
  }
  ptr++;
  return ans;
}

int parse(string& s){
  ptr=0;
  return field(s);
}

int main(void){
  int n;cin>>n;
  REP(i,n){
    string s;cin>>s;
    cout<<parse(s)<<endl;
  }
  return 0;
}

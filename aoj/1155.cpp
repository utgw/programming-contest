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

int formula(string& s,int& p,int& q,int& r){
  // cout<<s[ptr];
  if(s[ptr]=='-'){
    ptr++;
    return 2-formula(s,p,q,r);
  }else if(s[ptr]=='('){
    ptr++;
    int a=formula(s,p,q,r);
    char e=s[ptr];
    // cout<<e;
    ptr++;
    int b=formula(s,p,q,r);
    // cout<<s[ptr];
    ptr++;
    if(e=='*'){
      return min(a,b);
    }else if(e=='+'){
      return max(a,b);
    }
  }else{
    char poe=s[ptr];
    ptr++;
    if(poe=='0'){
      return 0;
    }else if(poe=='1'){
      return 1;
    }else if(poe=='2'){
      return 2;
    }else if(poe=='P'){
      return p;
    }else if(poe=='Q'){
      return q;
    }else if(poe=='R'){
      return r;
    }
  }
}

int parse(string& s,int& p,int& q,int& r){
  ptr=0;
  return formula(s,p,q,r);
}

int main(void){
  string s;
  while(cin>>s,s!="."){
    int ans=0;
    REP(p,3)REP(q,3)REP(r,3){
      if(parse(s,p,q,r)==2)ans++;
    }
    // int p=0,q=0,r=0;
    // parse(s,p,q,r);
    // cout<<endl;
    cout<<ans<<endl;
  }
  return 0;
}

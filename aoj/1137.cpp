#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int hton(const string& s){
  int result=0;
  int t=1;
  REP(i,s.size()){
    if(isdigit(s[i]))t=s[i]-'0';
    else{
      if(s[i]=='m')t*=1000;
      else if(s[i]=='c')t*=100;
      else if(s[i]=='x')t*=10;
      result+=t;
      t=1;
    }
  }
  return result;
}

string ntoh(int a){
  string result="";
  int b=a/1000,c=a%1000/100,d=a%100/10,e=a%10;
  if(b>=2)result+=to_string(b);
  if(b>0)result+="m";
  if(c>=2)result+=to_string(c);
  if(c>0)result+="c";
  if(d>=2)result+=to_string(d);
  if(d>0)result+="x";
  if(e>=2)result+=to_string(e);
  if(e>0)result+="i";
  return result;
}

int main(void){
  int n;cin>>n;
  REP(i,n){
    string a,b;cin>>a>>b;
    // cout<<hton(a)<<"+"<<hton(b)<<"="<<hton(a)+hton(b)<<endl;
    cout<<ntoh(hton(a)+hton(b))<<endl;
  }
  return 0;
}

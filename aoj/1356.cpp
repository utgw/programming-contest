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
  const int POEE=10000;
  vector<bool> appear(POEE,false);
  vector<int> p(n);
  REP(i,n){
    cin>>p[i];
    if(i>=3){
      //a b c d
      //ab bc cd
      //abc bcd
      //abcd
      int a=p[i-3],b=p[i-2],c=p[i-1],d=p[i];
      appear[a]=true;
      appear[b]=true;
      appear[c]=true;
      appear[d]=true;
      appear[10*a+b]=true;
      appear[10*b+c]=true;
      appear[10*c+d]=true;
      appear[100*a+10*b+c]=true;
      appear[100*b+10*c+d]=true;
      appear[1000*a+100*b+10*c+d]=true;
    }else if(i>=2){
      //a b c
      //ab bc
      //abc
      int a=p[i-2],b=p[i-1],c=p[i];
      appear[a]=true;
      appear[b]=true;
      appear[c]=true;
      appear[10*a+b]=true;
      appear[10*b+c]=true;
      appear[100*a+10*b+c]=true;
    }else if(i>=1){
      //a b
      //ab
      int a=p[i-1],b=p[i];
      appear[a]=true;
      appear[b]=true;
      appear[10*a+b]=true;
    }else{
      //a
      appear[p[i]]=true;
    }
  }
  REP(i,POEE){
    if(!appear[i]){
      cout<<i<<endl;
      break;
    }
  }
  return 0;
}

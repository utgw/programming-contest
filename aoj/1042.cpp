#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
const ll inf = INT_MAX;
const double eps = 1e-8;
const double pi = acos(-1.0);

int main(void){
  char in_str[1024];
  while(cin.getline(in_str,sizeof(in_str))){
    if(string(in_str)=="END OF INPUT")break;
    int result=0;
    for(int i=0;in_str[i]!='\0';i++){
      if(in_str[i]==' '){
        cout<<result;
        result=0;
      }else result++;
    }
    cout<<result<<endl;
  }
  return 0;
}

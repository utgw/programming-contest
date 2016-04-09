#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
typedef long long ll;
using namespace std;
 
int main(void){
    int a,b;cin>>a>>b;
    if(b-a*(b/a)==0)cout<<b/a<<endl;
    else cout<<b/a+1<<endl;
    return 0;
}

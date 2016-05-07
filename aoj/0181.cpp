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
  int m,n;
  while(cin>>m>>n,n){
    vector<int> a(n);
    REP(i,n)cin>>a[i];
    int left=-1,right=1500000;
    while(right-left>1){
      int mid=(right+left)/2;
      int l=0,r=0,poe=0;
      int s=a[0];
      while(r<n){
        if(a[l]>mid){
          poe=m+1;
          break;
        }
        if(s>mid){
          poe++;
          l=r;
          r=l;
          s=a[l];
        }else{
          r++;
          s+=a[r];
        }
      }
      if(poe<m)right=mid;
      else left=mid;
    }
    cout<<right<<endl;
  }
  return 0;
}

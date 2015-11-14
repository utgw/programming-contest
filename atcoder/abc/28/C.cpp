#include <stdio.h>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) x.begin(),x.end()
int main(){
  int input[5];
  vector<int> result;
  REP(i,5) scanf("%d",&input[i]);
  REP(i,5){
    FOR(j,i+1,5){
      FOR(k,j+1,5){
        int a = input[i]+input[j]+input[k];
        if(find(ALL(result),a) == result.end()) result.push_back(a);
      }
    }
  }
  sort(ALL(result),greater<int>());
  printf("%d\n",result[2]);
  return 0;
}

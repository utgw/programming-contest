#include <iostream>
#include <vector>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(void){
  while(true){
    int N;
    cin >> N;
    if(N==0) break;
    vector<int> sum(N);
    int cnt=0;
    REP(i,N) sum[i] = i*(i+1)/2;
    REP(i,N){
      REP(j,i){
        if(sum[i]-sum[j]==N) cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}

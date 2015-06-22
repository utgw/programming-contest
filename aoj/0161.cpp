#include <cstdio>
#include <vector>
#include <algorithm>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
class lesstime{
  public:
    bool operator()(const vector<int> left,const vector<int> right) const {
      return left[1] < right[1];
    }
};
int main(){
  while(1){
    int tn;
    vector<vector<int>> teaminfo;
    scanf("%d\n",&tn);
    if(tn==0)break;
    REP(i,tn){
      vector<int> info(2);
      info[1] = 0;
      int second,minute;
      scanf("%d",&info[0]);
      REP(j,4){
        scanf("%d%d",&minute,&second);
        info[1] += minute*60+second;
      }
      teaminfo.push_back(info);
    }
    sort(teaminfo.begin(),teaminfo.end(),lesstime());
    printf("%d\n",teaminfo[0][0]);
    printf("%d\n",teaminfo[1][0]);
    printf("%d\n",teaminfo[teaminfo.size()-2][0]);
  }
  return 0;
}

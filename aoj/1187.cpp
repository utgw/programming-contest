#include <vector>
#include <cstdio>
#include <algorithm>
#include <functional>
#define range(i,n) for(int i=0;i<(int)(n);i++)
#define drange(i,n,t) for(int i=t;i>n;i--)
using namespace std;

struct submission {
  int minute;
  int team;
  int problem;
  bool accept;
  submission(int minute, int team, int problem, int accept) :
  minute(minute), team(team), problem(problem), accept(accept == 0) {}
};

int main(void){
  while(1){
    int minute, team, problem, record;
    vector<submission> submissions;
    scanf("%d%d%d%d",&minute,&team,&problem,&record);
    if(minute == 0) break;
    range(i,record){
      int m, t, p, a;
      scanf("%d%d%d%d",&m,&t,&p,&a);
      submission sub(m, t-1, p-1, a);
      submissions.push_back(sub);
    }
    int penalty[50]={0};
    int solved[50]={0};
    int wronganswer[50][10]={{0}};
    for(submission s:submissions){
      if(s.accept){
        penalty[s.team] += s.minute + wronganswer[s.team][s.problem];
        solved[s.team]++;
      }else{
        wronganswer[s.team][s.problem] += 20;
      }
    }
    int rank[50]={0};
    range(i, team){
      range(j, team){
        if(i == j) continue;
        if(solved[i] > solved[j] || (solved[i] == solved[j] && penalty[i] < penalty[j])){
          rank[i]++;
        }
      }
    }
    vector<vector<int> > rankset;
    drange(i, *min_element(rank, rank+50)-1, *max_element(rank, rank+50)){
      vector<int> rs;
      range(j, team){
        if(i == rank[j])
          rs.push_back(j+1);
        }
      if(rs.size() >= 1){
        sort(rs.begin(), rs.end(), greater<int>());
        rankset.push_back(rs);
      }
    }
    range(i,rankset.size()){
      vector<int> rs = rankset[i];
      range(j,rs.size()){
        int r = rs[j];
        printf("%d",r);
        if(rs.size() > 1 && j != (int)rs.size()-1)
          printf("=");
      }
      if(i != (int)rankset.size()-1)
        printf(",");
    }
    printf("\n");
  }
  return 0;
}

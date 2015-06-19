#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <functional>
#define range(i,n) for(int i=0;i<n;i++)
#define xrange(i,n,t) for(int i=t;i<n;i++)
#define drange(i,n,t) for(int i=t;i>n;i--)
#define iter(type, var, cursor) for(vector<type>::iterator cursor = var.begin(); cursor != var.end(); cursor++)
using namespace std;

struct submission {
  int minute;
  int team;
  int problem;
  bool accept;
  submission(int minute, int team, int problem, int accept) :
  minute(minute), team(team), problem(problem), accept(accept == 0) {}
};

struct contest {
  int minute;
  int team;
  int problem;
  int record;
  vector<submission> submissions;
  contest(int minute, int team, int problem, int record, vector<submission> submissions) :
  minute(minute), team(team), problem(problem), record(record), submissions(submissions) {}
};

int main(void){
  vector<contest> contests;

  while(true){
    int minute, team, problem, record;
    vector<submission> submissions;
    cin >> minute >> team >> problem >> record;
    if(minute == 0) break;
    range(i,record){
      int m, t, p, a;
      cin >> m >> t >> p >> a;
      submission sub(m, t-1, p-1, a);
      submissions.push_back(sub);
    }
    contests.push_back(contest(minute, team, problem, record, submissions));
  }

  iter(contest, contests, cursor){
    contest c = *cursor;
    vector<submission> submissions = c.submissions;
    int penalty[50];
    int solved[50];
    int wronganswer[50][10];
    memset(penalty, 0, sizeof(penalty));
    memset(solved, 0, sizeof(solved));
    memset(wronganswer, 0, sizeof(wronganswer));
    iter(submission, submissions, cur){
      submission s = *cur;
      if(s.accept){
        penalty[s.team] += s.minute + wronganswer[s.team][s.problem];
        solved[s.team]++;
      }else{
        wronganswer[s.team][s.problem] += 20;
      }
    }
    int rank[50];
    memset(rank, 0, sizeof(rank));
    range(i, c.team){
      range(j, c.team){
        if(i == j) continue;
        if(solved[i] > solved[j] || (solved[i] == solved[j] && penalty[i] < penalty[j])){
          rank[i]++;
        }
      }
    }
    vector<vector<int> > rankset;

    drange(i, *min_element(rank, rank+50)-1, *max_element(rank, rank+50)){
      vector<int> rs;
      range(j, c.team){
        if(i == rank[j])
          rs.push_back(j+1);
        }
      if(rs.size() >= 1){
        sort(rs.begin(), rs.end(), greater<int>());
        rankset.push_back(rs);
      }
    }

    iter(vector<int>, rankset, cursor){
      vector<int> rs = *cursor;
      iter(int, rs, cur){
        int r = *cur;
        cout << r;
        if(rs.size() > 1 && cur != rs.end()-1)
          cout << "=";
      }
      if(cursor != rankset.end()-1)
        cout << ",";
    }
    cout << endl;
  }

  return 0;
}

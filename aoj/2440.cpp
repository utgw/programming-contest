#include <cstdio>
#include <cstring>
#define FOR(i,m,n) for(int i=m;i<(int)n;i++)
#define REP(i,n) FOR(i,0,n)

int main(){
  const int MAX_N = 256;
  const int MAX_NAME = 11;
  int N,M;
  bool isOpened = false;
  char membersname[MAX_N][MAX_NAME];
  scanf("%d",&N);
  REP(i,N)scanf("%s",membersname[i]);
  scanf("%d",&M);
  REP(j,M){
    char input[MAX_NAME];
    bool unknown = true;
    scanf("%s",input);
    REP(i,N){
      if(strcmp(membersname[i],input)==0){
        unknown = false;
        if(isOpened){
          printf("Closed");
          isOpened = false;
        }else{
          printf("Opened");
          isOpened = true;
        }
        printf(" by %s\n",input);
        break;
      }
    }
    if(unknown)printf("Unknown %s\n",input);
  }
  return 0;
}

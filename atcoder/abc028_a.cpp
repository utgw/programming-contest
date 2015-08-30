#include <stdio.h>
int main(){
  int score;
  scanf("%d",&score);
  if(score <= 59) printf("Bad\n");
  else if(score <= 89) printf("Good\n");
  else if(score <= 99) printf("Great\n");
  else printf("Perfect\n");
  return 0;
}

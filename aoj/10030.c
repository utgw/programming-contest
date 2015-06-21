#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
  int S[100], T[100];
  char checked[100];
  int n,q;
  int i=0;
  int j;
  int c=0;
  char input[400];
  char *p;
  memset(checked,0,sizeof(checked));
  scanf("%d\n",&n);
  gets(input);
  //split
  p = strtok(input," ");
  S[0] = atoi(p);
  while(p != NULL){
    p = strtok(NULL," ");
    if(p != NULL){
      i++;
      S[i] = atoi(p);
    }
  }
  //end split
  scanf("%d\n",&q);
  gets(input);
  //split
  i=0;
  p = strtok(input," ");
  T[0] = atoi(p);
  while(p != NULL){
    p = strtok(NULL," ");
    if(p != NULL){
      i++;
      T[i] = atoi(p);
    }
  }
  //end split
  for(i=0;i<q;i++){
    for(j=0;j<n;j++){
      if(T[i] == S[j] && checked[i] == 0){
        c++;
        checked[i] = 1;
      }
    }
  }
  printf("%d\n",c);
  return 0;
}

//TODO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  while(1){
    int cols,rows;
    int robox=0;
    int roboy=0;
    int direction=0;
    int vector[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
    scanf("%d%d\n",&cols,&rows);
    if(cols==0&&rows==0)break;
    while(1){
      char command[50];
      char *ptr;
      int v;
      gets(command);
      ptr=strtok(command," ");
      if(strcmp("STOP",ptr)==0)break;
      else if(strcmp("FORWARD",ptr)==0){
        while(ptr!=NULL){
          ptr=strtok(NULL," ");
          if(ptr!=NULL){
            v=atoi(ptr);
            robox+=vector[direction][1]*v;
            roboy+=vector[direction][0]*v;
            if(robox>=cols)robox=cols-1;
            if(roboy>=rows)roboy=rows-1;
            if(robox<0)robox=0;
            if(roboy<0)roboy=0;
          }
        }
      }else if(strcmp("BACKWARD",ptr)==0){
        while(ptr!=NULL){
          ptr=strtok(NULL," ");
          if(ptr!=NULL){
            v=atoi(ptr);
            robox-=vector[direction][1]*v;
            roboy-=vector[direction][0]*v;
            if(robox>=cols)robox=cols-1;
            if(roboy>=rows)roboy=rows-1;
            if(robox<0)robox=0;
            if(roboy<0)roboy=0;
          }
        }
      }else if(strcmp("RIGHT",ptr)==0)direction=(direction+1)%4;
      else direction=(direction-1)%4;
    }
    printf("%d %d\n",robox+1,roboy+1);
  }
}

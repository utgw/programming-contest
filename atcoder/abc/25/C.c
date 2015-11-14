//TODO
#include <stdio.h>
int main(){
  int b[2][3];
  int c[3][2];
  int i,j,k,l;
  int d,e;
  int m[3][3]={{0}};
  int mp[2]={0};
  for(i=0;i<2;i++){
    if(scanf("%d%d%d\n",&b[i][0],&b[i][1],&b[i][2])==EOF)return -1;
  }
  for(i=0;i<3;i++){
    if(scanf("%d%d\n",&c[i][0],&c[i][1])==EOF)return -1;
  }
  for(i=0;i<9;i++){
    for(j=i+1;j<9;j++){
      for(k=j+1;k<9;k++){
        for(l=k+1;l<9;l++){
          m[i/3][i%3]=m[j/3][j%3]=m[k/3][k%3]=m[l/3][l%3]=1;
          int score[2]={0};
          for(d=0;d<3;d++){
            for(e=0;e<2;e++){
              if(m[d][e]==m[d][e+1])score[0]+=b[e][d];
              else score[1]+=b[e][d];
              if(m[e][d]==m[e+1][d])score[0]+=c[d][e];
              else score[1]+=c[d][e];
            }
          }
          if(score[0]>=mp[0]&&score[1]>=mp[1]){
            mp[0]=score[0];
            mp[1]=score[1];
          }
          for(d=0;d<9;d++)m[d/3][d%3]=0;
        }
      }
    }
  }
  printf("%d\n%d\n",mp[0],mp[1]);
  return 0;
}

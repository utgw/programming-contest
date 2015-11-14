#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;
const int MAX_S = 1000;

int ld(string s1, string s2){
  int dp[MAX_S+1][MAX_S+1];
  int l1 = s1.size(), l2 = s2.size();
  REP(i,l1+1) dp[i][0] = i;
  REP(i,l2+1) dp[0][i] = i;
  FOR(i,1,l1+1) FOR(j,1,l2+1){
    int cost = s1[i-1] == s2[j-1] ? 0 : 1;
    dp[i][j] = min({
                    dp[i-1][j]+1,     // Insertion
                    dp[i][j-1]+1,     // Deletion
                    dp[i-1][j-1]+cost // Replace
                   });
  }
  return dp[l1][l2];
}

int main(){
  string s1, s2;
  cin >> s1 >> s2;
  cout << ld(s1, s2) << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) v.begin(),v.end()

int main(){
  const int MAX_THREAD = 100000;
  int n,m;
  std::cin >> n >> m;

  std::vector<int> v(n);
  std::vector<int>::iterator b=v.begin();
  REP(i,n)v[i]=i+1;
  REP(i,m){
    int w;
    std::vector<int>::iterator c;
    std::cin >> w;
    c = std::find(ALL(v),w);
    v.erase(c);
    v.insert(b,w);
  }
  REP(i,n)std::cout << v[i] << std::endl;
  return 0;
}

#include <iostream>
using namespace std;

int main(){
  int N, S, T, w;
  int res = 0;
  cin >> N >> S >> T >> w;
  if(w >= S && w <= T)
    res++;
  for(int i=0;i<N-1;i++){
    int A;
    cin >> A;
    w += A;
    if(w >= S && w <= T)
      res++;
  }
  cout << res << endl;
  return 0;
}
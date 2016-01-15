#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n; cin >> n;
  ll result = 1;
  for(int i=n;i>0;i--)
    result *= i;
  cout << result << endl;
  return 0;
}
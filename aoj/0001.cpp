#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
  vector<int> mt;

  for(int i=0;i<10;i++){
    int input;
    cin >> input;
    mt.push_back(input);
  }

  sort(mt.begin(),mt.end(),greater<int>());
  for(int i=0;i<3;i++){
    cout << mt[i] << endl;
  }
  return 0;
}

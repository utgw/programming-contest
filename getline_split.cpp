#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(const string &str, char delim){
  istringstream iss(str); string tmp; vector<string> res;
  while(getline(iss, tmp, delim)) res.push_back(tmp);
  return res;
}

int main(){
  string input;

  getline(cin, input);

  for(string& s : split(input, ' '))
    cout << s << endl;
  return 0;
}

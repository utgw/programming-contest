#include <vector>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#include <boost/algorithm/string.hpp>
#include <boost/foreach.hpp>
using namespace std;

float sum(vector<float> data){
  // 総和を計算
  float s = 0;
  BOOST_FOREACH(float d, data) s += d;
  return s;
}

float average(vector<float> data){
  // 平均を計算
  return sum(data)/data.size();
}

int main(){
  vector<vector<float>> dataset;
  while(true){
    int n;
    string input;
    vector<string> splitted;
    vector<float> data;

    scanf("%d\n",&n);
    if(n == 0) break;
    getline(cin, input);

    boost::split(splitted, input, boost::is_space());
    BOOST_FOREACH(string s, splitted)
      data.push_back(atof(s.c_str()));
    dataset.push_back(data);
  }

  BOOST_FOREACH(vector<float> data, dataset){
    // 処理するよ
    vector<float> data_s;
    float davr = average(data);
    davr *= davr;
    BOOST_FOREACH(float d, data)
      data_s.push_back(d*d);
    float dms = average(data_s);
    printf("%.8f\n",sqrt(dms - davr));
  }
  return 0;
}

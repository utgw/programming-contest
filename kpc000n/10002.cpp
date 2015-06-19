#include <iostream>
#include <vector>
#include <string>
#include <boost/algorithm/string.hpp>
#include <boost/foreach.hpp>
#include <cstdlib>
#include <cmath>
#include <cstdio>
using namespace std;

// 合計
double sum(vector<double> n){
  double res = 0;
  BOOST_FOREACH(double m, n)
    res += m;
  return res;
}

// 平均
double average(vector<double> n){
  return sum(n)/n.size();
}

// 自乗平均
double saverage(vector<double> n){
  BOOST_FOREACH(double& m, n)
    m *= m;
  return average(n)/n.size();
}

// 分散
double variance(vector<double> n){
  vector<double> data;
  double a = average(n);
  BOOST_FOREACH(double m, n)
    data.push_back(m-a);
  return saverage(data);
}

int main(void){
  vector<vector<double>> dataset;

  while(true){
    string input;
    vector<string> strs;

    cin >> input;
    if(input == "0") break;

    getline(cin, input);
    boost::split(strs, input, boost::is_space());
    BOOST_FOREACH(string m, strs) cout << m << endl;
    cout << endl;
    vector<double> d;
    BOOST_FOREACH(string s, strs){
      d.push_back(atoi(s.c_str()));
    }
    dataset.push_back(d);
  }

  BOOST_FOREACH(vector<double> ds, dataset){
    cout << sqrt(variance(ds)) << endl;
  }
}

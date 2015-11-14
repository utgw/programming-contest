#include <bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

int pow(int base, int x){
  if(x == 0) return 1;
  if(x % 2 == 0) return pow(base,x/2) * pow(base,x/2);
  return base * pow(base,x-1);
}

// 小数xを、小数第n位で四捨五入
double round(double x, int n){
  int a = x * pow(10,n);
  int b = a % 10;
  cout << b << endl;
  if(b < 5) a -= b;
  else a = a - b + 10;
  return (double)a/pow(10,n);
}

string deg_to_str(const int &d){
  if(d >= 112 && d <= 337)
    return "NNE";
  if(d > 337 && d <= 562)
    return "NE";
  if(d > 562 && d <= 787)
    return "ENE";
  if(d > 787 && d <= 1012)
    return "E";
  if(d > 1012 && d <= 1237)
    return "ESE";
  if(d > 1237 && d <= 1462)
    return "SE";
  if(d > 1462 && d <= 1687)
    return "SSE";
  if(d > 1687 && d <= 1912)
    return "S";
  if(d > 1912 && d <= 2137)
    return "SSW";
  if(d > 2137 && d <= 2362)
    return "SW";
  if(d > 2362 && d <= 2587)
    return "WSW";
  if(d > 2587 && d <= 2812)
    return "W";
  if(d > 2812 && d <= 3037)
    return "WNW";
  if(d > 3037 && d <= 3262)
    return "NW";
  if(d > 3262 && d <= 3487)
    return "NNW";
  return "N";
}

int dis_to_int(const int &dis){
  if(dis >= 0 && dis <= 12)
    return 0;
  if(dis >= 18 && dis <= 90)
    return 1;
  if(dis >= 96 && dis <= 198)
    return 2;
  if(dis >= 204 && dis <= 324)
    return 3;
  if(dis >= 330 && dis <= 474)
    return 4;
  if(dis >= 480 && dis <= 642)
    return 5;
  if(dis >= 648 && dis <= 828)
    return 6;
  if(dis >= 834 && dis <= 1026)
    return 7;
  if(dis >= 1032 && dis <= 1242)
    return 8;
  if(dis >= 1248 && dis <= 1464)
    return 9;
  if(dis >= 1470 && dis <= 1704)
    return 10;
  if(dis >= 1710 && dis <= 1956)
    return 11;
  return 12;
}

int main(void){
  int deg,dis;
  cin >> deg >> dis;
  int d = (int)(round((double)dis/60,2)*60);
  cout << (double)dis/60 << endl;
  cout << round((double)dis/60,2) << endl;
  cout << d << endl;
  if(d <= 12)
    cout << "C 0" << endl;
  else
    cout << deg_to_str(deg) << " " << dis_to_int(d) << endl;
  return 0;
}
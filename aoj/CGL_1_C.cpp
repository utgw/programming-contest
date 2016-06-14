#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;
const double eps = 1e-8;
const double pi = acos(-1.0);

// 点
typedef complex<double> Point;

// 外積
double cross (const Point& a, const Point& b) {
  return imag(conj(a) * b);
}

// 内積
double dot (const Point& a, const Point& b) {
  return real(conj(a) * b);
}

// 2点a, bを通る直線
struct Line : public vector<Point> {
  Line (const Point& a, const Point& b) {
    push_back(a);
    push_back(b);
  }
};

// 直線lに対する点pの射影
Point projection (const Line& l, const Point& p) {
  double k = dot(l[1] - l[0], p - l[0]) / abs(l[1] - l[0]) / abs(l[1] - l[0]);
  return l[0] + k * (l[1] - l[0]);
}

// 直線lに対する点pの反射
Point reflection (const Line& l, const Point& p) {
  Point q = projection(l, p);
  return p + 2.0 * (q - p);
}

// Counter-Clockwise (点の進行方向)
// 3点a, b, cを、この順に進むとき、
// a, b で折れてcがaに対して反時計回りの方向 -> 1
// a, b で折れてcがaに対して時計回りの方向 -> -1
// a, b で逆を向いてc で、c が a より向こう側にある -> 2
// a, b, c の順 -> -2
// c は a, b を内分する -> 0
int ccw (Point a, Point b, Point c) {
  b -= a;
  c -= a;
  if (cross(b, c) > 0)   return +1;
  if (cross(b, c) < 0)   return -1;
  if (dot(b, c) < 0)     return +2;
  if (norm(b) < norm(c)) return -2;
  return 0;
}

int main(void){
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  Point p0(x1, y1), p1(x2, y2);
  int q;
  cin >> q;
  REP(i,q){
    double x, y;
    cin >> x >> y;
    int result = ccw(p0, p1, Point(x, y));
    switch(result){
      case 1:
        cout << "COUNTER_CLOCKWISE" << endl;
        break;
      case -1:
        cout << "CLOCKWISE" << endl;
        break;
      case 2:
        cout << "ONLINE_BACK" << endl;
        break;
      case -2:
        cout << "ONLINE_FRONT" << endl;
        break;
      default:
        cout << "ON_SEGMENT" << endl;
        break;
    }
  }
  return 0;
}

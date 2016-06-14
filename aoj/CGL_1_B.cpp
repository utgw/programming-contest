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

int main(void){
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  Line l(Point(x1, y1), Point(x2, y2));
  int q;
  cin >> q;
  REP(i,q){
    double x, y;
    cin >> x >> y;
    Point result = reflection(l, Point(x, y));
    cout << fixed << setprecision(15) << real(result) << " " << imag(result) << endl;
  }
  return 0;
}

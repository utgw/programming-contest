typedef long double ld;
const ld eps = 1e-8;
const ld pi = acos(-1.0);

// 点
typedef complex<ld> Point;

namespace std {
  bool operator< (const Point& lhs, const Point& rhs) {
    return real(lhs) != real(rhs) ? real(lhs) < real(rhs) : imag(lhs) < imag(rhs);
  }
}

// 外積
ld cross (const Point& a, const Point& b) {
  return imag(conj(a) * b);
}

// 内積
ld dot (const Point& a, const Point& b) {
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
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_1_A
Point projection (const Line& l, const Point& p) {
  ld k = dot(l[1] - l[0], p - l[0]) / abs(l[1] - l[0]) / abs(l[1] - l[0]);
  return l[0] + k * (l[1] - l[0]);
}

// 直線lに対する点pの反射
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_1_B
Point reflection (const Line& l, const Point& p) {
  Point q = projection(l, p);
  return p + (ld)2.0 * (q - p);
}

// Counter-Clockwise (点の進行方向)
// 3点a, b, cを、この順に進むとき、
// a, b で折れてcがaに対して反時計回りの方向 -> 1
// a, b で折れてcがaに対して時計回りの方向 -> -1
// a, b で逆を向いて、c が a より向こう側にある -> 2
// a, b, c の順 -> -2
// c は a, b を内分する -> 0
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_1_C
int ccw (Point a, Point b, Point c) {
  b -= a;
  c -= a;
  if (cross(b, c) > 0)   return +1;
  if (cross(b, c) < 0)   return -1;
  if (dot(b, c) < 0)     return +2;
  if (norm(b) < norm(c)) return -2;
  return 0;
}

// 2直線l, mが平行であるかどうか
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_A
bool is_parallel (const Line& l, const Line& m) {
  return abs(cross(l[1] - l[0], m[1] - m[0])) < eps;
}

// 2直線l, mが垂直であるかどうか
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_A
bool is_orthogonal (const Line& l, const Line& m) {
  return abs(dot(l[1] - l[0], m[1] - m[0])) < eps;
}

// 2直線l, mが交差するかどうか
bool intersectLL (const Line& l, const Line& m) {
  return !is_parallel(l, m) || abs(cross(l[1] - l[0], m[0] - l[0])) < eps;
}

// 直線lと線分sが交差するかどうか
bool intersectLS (const Line& l, const Line& s) {
  return cross(l[1] - l[0], s[0] - l[0]) * cross(l[1] - l[0], s[1] - l[0]) < eps;
}

// 直線lと点pが交差する(上にある)かどうか
bool intersectLP (const Line& l, const Point& p) {
  return abs(cross(l[1] - p, l[0] - p)) < eps;
}

// 2線分s, tが交差するかどうか
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_B
bool intersectSS (const Line& s, const Line& t) {
  return ccw(s[0], s[1], t[0]) * ccw(s[0], s[1], t[1]) <= 0 &&
         ccw(t[0], t[1], s[0]) * ccw(t[0], t[1], s[1]) <= 0;
}

// 線分sと点pが交差する(上にある)かどうか
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_D
bool intersectSP (const Line& s, const Point& p) {
  return abs(s[0] - p) + abs(s[1] - p) - abs(s[1] - s[0]) < eps;
}

// 2直線l, mの交点
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_C
Point crosspointLL (const Line& l, const Line& m) {
  ld A = cross(l[1] - l[0], m[1] - m[0]);
  ld B = cross(l[1] - l[0], l[1] - m[0]);
  if (abs(A) < eps && abs(B) < eps) // 同一直線
    return m[0];
  if (abs(A) < eps) // 2直線は平行
    assert(false);
  return m[0] + B / A * (m[1] - m[0]);
}

// 直線lと点pの距離
ld distanceLP (const Line& l, const Point& p) {
  return abs(p - projection(l, p));
}

// 2直線l, mの距離
ld distanceLL (const Line& l, const Line& m) {
  return intersectLL(l, m) ? 0 : distanceLP(l, m[0]);
}

// 直線lと線分sの距離
ld distanceLS (const Line& l, const Line& s) {
  if (intersectLS(l, s)) return 0;
  return min(distanceLP(l, s[0]), distanceLP(l, s[1]));
}

// 線分sと点pの距離
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_D
ld distanceSP (const Line& s, const Point& p) {
  const Point r = projection(s, p);
  if (intersectSP(s, r)) return abs(r - p);
  return min(abs(s[0] - p), abs(s[1] - p));
}

// 2線分s, tの距離
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_2_D
ld distanceSS (const Line& s, const Line& t) {
  if (intersectSS(s, t)) return 0;
  return min({distanceSP(s, t[0]), distanceSP(s, t[1]), distanceSP(t, s[0]), distanceSP(t, s[1])});
}

// 多角形
// 点は反時計回り
typedef vector<Point> Polygon;

#define curr(P, i) P[(i) % (P.size())]
#define next(P, i) P[(i + 1) % (P.size())]
#define prev(P, i) P[(i - 1 + P.size()) % (P.size())]

// 多角形の面積
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_3_A
ld area (const Polygon& p) {
  ld result = 0;
  for (int i = 0; i < p.size(); ++i) {
    result += cross(p[i], p[(i+1)%(p.size())]);
  }
  return result / 2.0;
}

// 円
struct Circle {
  Point p;
  ld r;
  Circle (const Point& p, ld r) : p(p), r(r) {}
};

// 2円c1, c2の交点
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_E
vector<Point> crosspointCC (const Circle& c1, const Circle& c2) {
  vector<Point> result;
  ld d = abs(c1.p - c2.p);
  ld rc = (d * d + c1.r * c1.r - c2.r * c2.r) / (2 * d);
  ld dfr = c1.r * c1.r - rc * rc;
  if (abs(dfr) < eps) dfr = 0.0;
  if (dfr < 0.0) return result; // 交点がない
  ld rs = sqrt(dfr);
  Point diff = (c2.p - c1.p) / d;
  result.push_back(c1.p + diff * Point(rc, rs));
  if (dfr != 0.0) result.push_back(c1.p + diff * Point(rc, -rs));
  sort(result.begin(), result.end());
  return result;
}

// 円cと直線lの交点
// Verified: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_D
vector<Point> crosspointCL (const Circle& c, const Line& l) {
  vector<Point> result;
  ld d = distanceLP(l, c.p);
  if (d - c.r > eps) return result; // 交点がない
  ld len = (d > c.r) ? 0.0 : sqrt(c.r * c.r - d * d);
  Point nor = (l[0] - l[1]) / abs(l[0] - l[1]);
  result.push_back(projection(l, c.p) + len * nor);
  result.push_back(projection(l, c.p) - len * nor);
  sort(result.begin(), result.end());
  return result;
}

int main(void) {
  vector<Circle> cs;
  REP(i,2){
    ld cx, cy, r;
    cin >> cx >> cy >> r;
    cs.push_back(Circle(Point(cx, cy), r));
  }
  vector<Point> result = crosspointCC(cs[0], cs[1]);
  cout << fixed << setprecision(15);
  cout << real(result[0]) << " " << imag(result[0]) << " ";
  cout << real(result[1]) << " " << imag(result[1]) << endl;
  return 0;
}

#include<bits/stdc++.h>
#define FOR(i,m,n) for(int i=m;i<(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
using namespace std;

template <typename T>
void merge_segment (vector<pair<T, T>>& seg) {
  REP(i, seg.size() - 1) {
    if (seg[i].second >= seg[i + 1].second) {
      seg[i] = make_pair(seg[i].first, seg[i].second);
      seg[i + 1] = seg[i];
    } else if (seg[i].second >= seg[i + 1].first) {
      seg[i] = make_pair(seg[i].first, seg[i + 1].second);
      seg[i + 1] = seg[i];
    }
  }
  sort(ALL(seg));
  REP(i, seg.size() - 1) {
    int j = seg.size() - 1 - i;
    if (seg[j - 1].second >= seg[j].second) {
      seg[j - 1] = seg[j];
    } else if (seg[j - 1].second >= seg[j].first) {
      seg[j - 1] = seg[j];
    }
  }
  seg.erase(unique(ALL(seg)), seg.end());
}

int main(void){
  int N, W, H;
  cin >> N >> W >> H;
  vector<pair<int, int>> segX, segY;
  REP(i, N) {
    int x, y, w;
    cin >> x >> y >> w;
    segX.emplace_back(x - w, x + w);
    segY.emplace_back(y - w, y + w);
  }
  sort(ALL(segX));
  sort(ALL(segY));
  merge_segment(segX);
  merge_segment(segY);
  if ((segX.size() == 1 && segX[0].first <= 0 && segX[0].second >= W) || (segY.size() == 1 && segY[0].first <= 0 && segY[0].second >= H)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

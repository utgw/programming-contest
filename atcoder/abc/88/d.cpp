#include <bits/stdc++.h>
#define FOR(i, m, n) for(int i = (m); i < (n); i++)
#define REP(i, n) FOR(i, 0, n)
using namespace std;
const int d[][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

int main (void) {
  int h, w;
  int shiro = 0;
  cin >> h >> w;
  vector<vector<char>> s(h, vector<char>(w));
  vector<vector<bool>> visited(h, vector<bool>(w, false));
  REP(i, h) REP(j, w) {
    cin >> s[i][j];
    if (s[i][j] == '.') shiro++;
  }
  visited[0][0] = true;
  queue<tuple<int, int, int>> q;
  q.push(make_tuple(0, 0, 1));
  const int unreachable = 1000000;
  int min_dist = unreachable;
  while(!q.empty()) {
    int y, x, dist;
    tie(y, x, dist) = q.front();
    q.pop();
    if (y == h - 1 && x == w - 1) {
      min_dist = min(min_dist, dist);
      continue;
    }
    REP(i, 4) {
      int dy = y + d[i][0], dx = x + d[i][1];
      if (dy >= 0 && dy < h && dx >= 0 && dx < w && s[dy][dx] == '.' && !visited[dy][dx]) {
        visited[dy][dx] = true;
        q.push(make_tuple(dy, dx, dist + 1));
      }
    }
  }
  if (min_dist == unreachable)
    cout << -1 << endl;
  else
    cout << shiro - min_dist << endl;
  return 0;
}

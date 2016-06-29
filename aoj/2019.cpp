#include <bits/stdc++.h>
#define FOR(i,m,n) for (int i = (m); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(), (x).end()
#define CLR(x) memset((x), 0, sizeof(x))
using namespace std;

int main (void) {
    int m, n;
    while (cin >> n >> m, n) {
        vector<pair<int, int>> road(n);
        int result = 0;
        REP (i, n) {
            cin >> road[i].second >> road[i].first;
            result += road[i].first * road[i].second;
        }
        sort(ALL(road), greater<pair<int, int>>());
        REP (i, n) {
            if (m - road[i].second >= 0) {
                result -= road[i].first * road[i].second;
                m -= road[i].second;
            } else {
                result -= road[i].first * m;
                m = 0;
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}

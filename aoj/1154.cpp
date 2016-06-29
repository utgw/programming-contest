#include <bits/stdc++.h>
#define FOR(i,m,n) for (int i = (m); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(), (x).end()
#define CLR(x) memset((x), 0, sizeof(x))
using namespace std;

int main (void) {
    const int maxn = 300000;
    vector<int> eratos(maxn);
    iota(ALL(eratos), 0);
    eratos[0] = eratos[1] = -1;
    for (int i = 2; i * i < maxn; i++) {
        if (i % 7 != 1 && i % 7 != 6) {
            eratos[i] = -1;
            continue;
        }
        if (eratos[i] == -1) continue;
        for (int j = i + i; j < maxn; j += i){
            eratos[j] = -1;
        }
    }
    eratos.erase(remove(ALL(eratos), -1), eratos.end());
    int n = 2;
    while (cin >> n, n != 1) {
        cout << n << ":";
        for (const int& p : eratos) {
            if (n % p == 0 && (n / p % 7 == 1 || n / p % 7 == 6))
                cout << " " << p;
        }
        cout << endl;
    }
    return 0;
}

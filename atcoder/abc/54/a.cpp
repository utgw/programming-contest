#include <bits/stdc++.h>
using namespace std;

int strength (int i) {
  if (i == 1)
    return 14;
  else
    return i;
}

int main (void) {
  int a, b;
  cin >> a >> b;
  if (strength(a) > strength(b)) {
    cout << "Alice" << endl;
  } else if (strength(a) < strength(b)) {
    cout << "Bob" << endl;
  } else {
    cout << "Draw" << endl;
  }
  return 0;
}

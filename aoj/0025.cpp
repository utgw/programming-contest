#include <iostream>
using namespace std;

// TODO

int main(){
  while(true){
    int a[4];
    int b[4];
    int hit, blow;
    hit = blow = 0;

    cin >> a[0] >> a[1] >> a[2] >> a[3];
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    if(a[0] == a[1]) break;

    for(int i=0;i<4;i++){
      // if hit
      if(a[i] == b[i]){
        hit++;
        continue;
      }
      for(int j=0;j<4;j++){
        if(i == j) continue;
        // if blow
        if(a[i] == b[j]){
          blow++;
        }
      }
    }
    cout << hit << " " << blow << endl;
  }
  return 0;
}

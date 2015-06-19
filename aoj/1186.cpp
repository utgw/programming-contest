#include <iostream>
#include <vector>
using namespace std;

struct rectangle {
  int h;
  int w;
  rectangle(int h, int w) :
    h(h), w(w) {}
};

int main(void) {
  const int inf = 889464;
  int h, w;
  int y, x;
  int i, j;
  vector<rectangle> dataset;
  vector<rectangle>::iterator ds_iter;

  while(true){
    cin >> h >> w;
    if (h == 0 && w == 0) break;
    dataset.push_back(rectangle(h, w));
  }

  for(ds_iter = dataset.begin(); ds_iter != dataset.end(); ds_iter++){
    rectangle rect = *ds_iter;
    h = rect.h;
    w = rect.w;
    int dia = h*h + w*w;
    int diam = inf;
    for(i=1;i<=150;i++){  // よこ
      for(j=1;j<i;j++){  // たて
        int a = i*i+j*j;
        if ((dia < a || (dia == a && j > h)) && a <= diam){
          y = j;
          x = i;
          diam = a;
        }
      }
    }
    cout << y << " " << x << endl;
  }
  return 0;
}

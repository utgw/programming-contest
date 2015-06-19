#include <iostream>
#include <vector>
using namespace std;

int main(){
  while(true){
    int tax1, tax2, price;
    cin >> tax1 >> tax2 >> price;
    if(tax1 == 0) break;

    vector<int> prices;

    int i;
    for(i=1;i<price;i++){
      int price1, price2;
      int j;
      // i,j は税抜
      //i=10;j=90;
      price1 = i*(100+tax1)/100;
      for(j=1;j<price;j++){
        price2 = j*(100+tax1)/100;
        if((price1 + price2) == price){
          //cout << price1+price2 << endl;
          price1 = i * (100+tax2)/100;
          price2 = j * (100+tax2)/100;
          prices.push_back(price1+price2);
          //cout << i << " " << j << " " << price1+price2 << endl;
          price1 = i * (100+tax1)/100;
        }
      }
    }

    int max = -114514;
    for(int i=0;i<prices.size();i++){
      if (prices[i] > max) max = prices[i];
    }
    cout << max << endl;
    prices.clear();
  }
  return 0;
}

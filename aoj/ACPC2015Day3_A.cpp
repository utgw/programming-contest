#include <iostream>
#include <queue>
using namespace std;
#define FOR(i,m,n) for(int i=m;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)

int main(){
  int K;
  int isonoATK = 0;
  int nakajimaATK = 0;
  string command;
  queue<int> isono, nakajima;

  cin >> K;
  REP(i,K){
    cin >> command;
    if(command == "mamoru")
      isono.push(0);
    else if(command == "tameru")
      isono.push(1);
    else
      isono.push(2);
  }
  REP(i,K){
    cin >> command;
    if(command == "mamoru")
      nakajima.push(0);
    else if(command == "tameru")
      nakajima.push(1);
    else
      nakajima.push(2);
  }
  REP(i,K){
    int isonoCommand = isono.front(), nakajimaCommand = nakajima.front();
    bool isonoGuard = false, isonoAttack = false, nakajimaGuard = false, nakajimaAttack = false;
    isono.pop(); nakajima.pop();
    switch(isonoCommand){
      case 0: // mamoru
        isonoGuard = true;
        break;
      case 1: // tameru
        if(isonoATK < 5)
          isonoATK++;
        break;
      default: // kougekida
        isonoAttack = true;
        break;
    }
    switch(nakajimaCommand){
      case 0: // mamoru
        nakajimaGuard = true;
        break;
      case 1: // tameru
        if(nakajimaATK < 5)
          nakajimaATK++;
        break;
      default: // kougekida
        nakajimaAttack = true;
        break;
    }
    if(nakajimaAttack && !isonoAttack){
      if(nakajimaATK == 0){
        cout << "Isono-kun" << endl;
        return 0;
      }
      if(isonoGuard){
        if(nakajimaATK == 5){
          cout << "Nakajima-kun" << endl;
          return 0;
        }
      }else{
        cout << "Nakajima-kun" << endl;
        return 0;
      }
      nakajimaATK = 0;
    }else if(isonoAttack && !nakajimaAttack){
      if(isonoATK == 0){
        cout << "Nakajima-kun" << endl;
        return 0;
      }
      if(nakajimaGuard){
        if(isonoATK == 5){
          cout << "Isono-kun" << endl;
          return 0;
        }
      }else{
        cout << "Isono-kun" << endl;
        return 0;
      }
      isonoATK = 0;
    }else if(isonoAttack && nakajimaAttack){
      if(isonoATK > nakajimaATK){
        cout << "Isono-kun" << endl;
        return 0;
      }else if(isonoATK < nakajimaATK){
        cout << "Nakajima-kun" << endl;
        return 0;
      }
      isonoATK = nakajimaATK = 0;
    }
  }
  cout << "Hikiwake-kun" << endl;
  return 0;
}
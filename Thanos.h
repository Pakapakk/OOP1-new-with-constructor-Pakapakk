#include <iostream>
#include "monster.h"
#ifndef Thanos_h
#define Thanos_h

using namespace std;

class Thanos {
  private:
    int stones;
    int hp;
  public:
    Thanos(int = 0, int = 1000);
    ~Thanos();

    void snap_finger(monster *, int);
    void operator++();
};

Thanos::Thanos(int stones, int hp){
  this->stones = stones;
  this->hp = hp;
  cout << "Thanos is constructed." << "\n";
  cout << "Thanos has HP of " << hp << "\n";
}

Thanos::~Thanos(){
  cout << "Thanos has left." << "\n";
}

void Thanos::snap_finger(monster *m, int mon_in){
  cout << "------Monster HP------" << "\n";
  for(int i = 0; i < mon_in; i++){
    cout << "Monster : " << i + 1 << "\n";
    m[i].print_hp();
    cout << "\n";
  }
  
  if(stones == 6){
    cout <<"\n" << "Snapped!!" << "\n" << "\n";
    for(int i = 0; i < (mon_in + 1) / 2; i++){
      m[i].set_hp(0);
      stones = 0;
    }
  }
  else{
    cout << "Not enough stones." << "\n\n";
  }
  
  
  cout << "------Monster HP------" << "\n";
  for(int i = 0; i < mon_in; i++){
    cout << "Monster : " << i + 1 << "\n";
    m[i].print_hp();
  }
}

void Thanos::operator++(){
  stones++;
  cout << "\n";
  cout << "Thanos HP : " << hp << " stones obtained " << stones << "\n \n";
}

#endif
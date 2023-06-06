#include <iostream>
#include <iomanip>
#ifndef monster_h
#define monster_h

using namespace std;

class monster{
private:
	string name;
	int hp,potion;
public:

void attack(monster &); 
void print(); // to print all data

void set_hp(int);
int get_hp();

void print_hp();

monster(string = "Monster", int = 1);
~monster();
};

monster::monster(string name, int hp){
  if(hp <= 0) { cout << "Error HP." << "\n"; }
  else{
    this->name = name;
    this->hp = hp;
  }
}

monster::~monster(){
}

void monster::set_hp(int hp){
  this->hp = hp;
}

int monster::get_hp(){
  return hp;
}

void monster::print_hp(){
  cout << setw(3) << "HP : " << get_hp() << "\n";
}

void monster::attack(monster &b){
  cout << name << " attacks " << b.name << "\n";
  if (b.hp > 2){
    b.hp--;
  }
  else{
    b.hp = 0;
    cout << b.name << "is dead" << "\n";
  }
}
#endif
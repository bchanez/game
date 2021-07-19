#include "Monster.hpp"

Monster::Monster(void)
{
  std::cout << "Constructor Monster\n";
  this->name = "Slime";
  this->life = 5;
  this->dommage = 1;
}

Monster::~Monster(void)
{
  std::cout << "Destructor Monster\n";
}

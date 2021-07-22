#include "Monster.hpp"

Monster::Monster(std::vector<Being *> *beingList)
{
  std::cout << "Constructor Monster\n";

  // initialise les paramètres
  name = "Slime";
  life = 5;
  dommage = 1;
  this->beingList = beingList;
}

Monster::~Monster(void)
{
  std::cout << "Destructor Monster\n";
}

int Monster::update(void)
{
  switch (currentState)
  {
  case idle:
    Being::update();
    break;
  case walk:
    currentState = idle;
    break;
  case attack:
    currentState = idle;
    break;
  }

  return -1;
}

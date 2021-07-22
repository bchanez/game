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

int Monster::update(unsigned int indice)
{
  switch (currentState)
  {
  case idle:
    Being::update(indice);
    if (target != nullptr)
    {
      currentState = attack;
    }
    break;
  case walk:
    currentState = idle;
    break;
  case attack:
    targetAttack();

    currentState = idle;
    break;
  case dead:
    getTarget()->setTarget(nullptr);
    delete this;
    beingList->erase(beingList->begin() + indice);
    break;
  }

  return -1;
}

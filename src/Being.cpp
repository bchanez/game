#include "Being.hpp"

Being::Being(void)
{
  std::cout << "Constructor Being\n";
  currentState = idle;
}

Being::~Being(void)
{
  std::cout << "Destructor Being\n";
}

void Being::targetAttack(Being *being)
{
  being->setLife(being->getLife() - dommage);
}

// getter & setter
std::string Being::getName(void)
{
  return this->name;
}

int Being::getLife(void)
{
  return this->life;
}

void Being::setLife(int life)
{
  if (life <= 0)
  {
    life = 0;
  }
  this->life = life;
};

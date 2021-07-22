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

int Being::update(void)
{
  std::cout << name << " : " << life << "LP\n";
  return -1;
}

void Being::targetAttack(Being *being)
{
  being->setLife(being->getLife() - dommage);
}

// getter & setter
std::string Being::getName(void) const
{
  return this->name;
}

unsigned int Being::getLife(void) const
{
  return this->life;
}

void Being::setLife(unsigned int life)
{
  if (life <= 0)
  {
    life = 0;
  }
  this->life = life;
};

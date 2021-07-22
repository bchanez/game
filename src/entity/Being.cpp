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

int Being::update(unsigned int indice)
{
  std::cout << name << " : " << life << "LP\n";
  return -1;
}

void Being::targetAttack(void)
{
  std::cout << name << " attaque " << target->getName() << " : -" << dommage << "LP\n";
  target->setTarget(this);
  target->setLife(target->getLife() - dommage);
}

// getter & setter
std::string Being::getName(void) const
{
  return name;
}

int Being::getLife(void) const
{
  return life;
}

void Being::setLife(int life)
{
  if (life <= 0)
  {
    std::cout << name << " est mort\n";
    life = 0;
    currentState = dead;
  }
  this->life = life;
}

void Being::setTarget(Being *target)
{
  this->target = target;
}

Being *Being::getTarget(void) const
{
  return target;
}

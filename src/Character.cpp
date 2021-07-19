#include "Character.hpp"

Character::Character(void)
{
  std::cout << "Constructor Character\n";

  // demande le nom du joueur
  std::cout << "Quel est ton nom ?\n";
  std::cin >> name;
  life = 100;
  dommage = 3;
}

Character::~Character(void)
{
  std::cout << "Destructor Character\n";
}

int Character::update(void)
{
  switch (currentState)
  {
  case idle:
    std::cout << "character idle\n";
    break;
  }

  return 0;
}

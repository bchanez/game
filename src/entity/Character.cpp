#include "Character.hpp"

Character::Character(std::vector<Being *> *beingList)
{
  std::cout << "Constructor Character\n";

  // demande le nom du joueur
  std::cout << "Quel est ton nom ?\n";
  std::cin >> name;

  // initialise les paramètres
  life = 100;
  dommage = 3;
  this->beingList = beingList;
}

Character::~Character(void)
{
  std::cout << "Destructor Character\n";
}

int Character::update(void)
{
  int action = -1;
  int random = -1;

  switch (currentState)
  {
  case idle:
    Being::update();
    std::cout << "Que veux tu faire ?\n";
    std::cout << "0 -> quitter le jeu\n";
    std::cout << "1 -> marcher\n";
    std::cout << "2 -> attacker\n";
    std::cin >> action;

    if (action == 1)
    {
      currentState = walk;
    }
    else if (action == 2)
    {
      currentState = attack;
    }
    break;
  case walk:
    std::cout << name << " marche..\n";
    random = Random::intInRange(0, 5);
    if (random == 0)
    {
      std::cout << "Monstre rencontré!\n";
      Monster *monster = new Monster(beingList);
      beingList->push_back(monster);
      target = monster;
    }

    currentState = idle;
    break;
  case attack:
    if (target != nullptr)
    {
      targetAttack(target);
    }

    currentState = idle;
    break;
  }

  return action;
}

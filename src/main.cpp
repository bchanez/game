#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <memory>

#include "Character.hpp"
#include "Monster.hpp"
#include "Being.hpp"

int main()
{
  // permet de quitter le jeu
  bool end = false;

  // liste de toutes les entités
  std::vector<Being*> beingList;

  // initialisation du personnage
  beingList.push_back(new Character());

  // boucle de jeu
  do
  {
    for (unsigned int i = 0; i < beingList.size(); ++i)
    {
      if (beingList.at(i)->update() == 0)
      {
        end = true;
      }
    }

  } while (!end);

  return EXIT_SUCCESS;
}

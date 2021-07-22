#include "Application.hpp"

Application::Application(void)
{
  std::cout << "Constructor Application\n";

  // initialise le random
  Random::init();

  // initialisation du personnage
  beingList.push_back(new Character(&beingList));

  update();
}

Application::~Application(void)
{
  // supprime les pointeurs
  for (size_t i = 0; i < beingList.size(); i++)
  {
    delete (beingList[i]);
  }

  std::cout << "Destructor Application\n";
}

void Application::update(void)
{
  // permet de quitter le jeu
  bool end = false;

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
}

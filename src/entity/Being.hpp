#pragma once

#include <string>
#include <iostream>
#include <vector>

class Being
{
public:
  explicit Being(void);
  virtual ~Being(void);

  virtual int update(unsigned int indice);
  void targetAttack(void);

  // getter & setter
  std::string getName(void) const;
  int getLife(void) const;
  void setLife(int life);
  void setTarget(Being *target);
  Being *getTarget(void) const;

protected:
  std::string name;
  int life;
  int dommage;

  unsigned int currentState;
  enum state
  {
    idle,
    walk,
    attack,
    dead
  };

  std::vector<Being *> *beingList;
  Being *target;
};

#pragma once

#include <string>
#include <iostream>
#include <vector>

class Being
{
public:
  explicit Being(void);
  virtual ~Being(void);

  virtual int update(void);
  void targetAttack(Being *being);

  // getter & setter
  std::string getName(void) const;
  unsigned int getLife(void) const;
  void setLife(unsigned int life);

protected:
  std::string name;
  unsigned int life;
  unsigned int dommage;

  unsigned int currentState;
  enum state
  {
    idle,
    walk,
    attack
  };

  std::vector<Being *> *beingList;
  Being *target;
};

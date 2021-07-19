#pragma once

#include <string>
#include <iostream>

class Being
{
public:
  explicit Being(void);
  virtual ~Being(void);

  virtual int update(void) = 0;
  void targetAttack(Being *being);

  // getter & setter
  std::string getName(void);
  int getLife(void);
  void setLife(int life);

protected:
  unsigned int currentState;
  enum state
  {
    idle,
    walk,
    attack
  };
  std::string name;
  int life;
  int dommage;
};

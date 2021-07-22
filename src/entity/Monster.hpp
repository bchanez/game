#pragma once

#include <vector>
#include <iostream>
#include "Being.hpp"

class Monster : public Being
{
public:
  explicit Monster(std::vector<Being *> *beingList);
  virtual ~Monster();
  virtual int update(unsigned int indice) override;

private:
};

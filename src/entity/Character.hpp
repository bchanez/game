#pragma once

#include <iostream>
#include <vector>
#include "Being.hpp"
#include "Monster.hpp"
#include "../tool/Random.hpp"

class Character : public Being
{
public:
  explicit Character(std::vector<Being *> *beingList);
  virtual ~Character();
  virtual int update(void) override;

private:
};

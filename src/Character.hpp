#pragma once

#include <iostream>
#include "Being.hpp"

class Character : public Being
{
public:
  explicit Character();
  virtual ~Character();
  virtual int update(void) override;

private:
};

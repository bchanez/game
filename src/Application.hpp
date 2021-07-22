#pragma once

#include <iostream>
#include <vector>
#include "tool/Random.hpp"
#include "entity/Character.hpp"
#include "entity/Being.hpp"

class Application
{
public:
  explicit Application(void);
  virtual ~Application(void);
private:
  void update(void);

private:
  std::vector<Being *> beingList;
};

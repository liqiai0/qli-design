#ifndef __CONCRETE_STRATEGY_HH_

#include "IStrategy.h"
class Fish : public IStrategy
{
public:
  void doDishes();
};

class Vegetable : public IStrategy
{
public:
  void doDishes();
};

class Context : public IStrategy
{
public:
  void setStrategy(IStrategy *mStrategy);
  void doDishes();
private:
  IStrategy *mStrategy;
};


#endif

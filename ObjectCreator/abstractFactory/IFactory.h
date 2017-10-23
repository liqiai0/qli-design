#ifndef __I_FACTORY_HH__
#define __I_FACTORY_HH__

#include "IProduct.h"

class IFacroty
{
public:
  virtual ISUV *createSUV() = 0;
  virtual ICar *createCar() = 0;
};

class CheryFactory : public IFacroty
{
public:
  ISUV *createSUV();
  ICar *createCar();
};

class BMWFactory : public IFacroty
{
public:
  ISUV *createSUV();
  ICar *createCar();
};


#endif

#ifndef __I_FACTORY_H__
#define __I_FACTORY_H__

/*
IProduct
 */
class ICar
{
public:
  virtual void run() = 0;
};
/*
 虚拟工厂
 */
class CarFactory
{
public:
  virtual ICar *createCar() = 0;
};

/* 实际产品 */
class Chery : public ICar
{
public:
  void run();
};

class Bmw : public ICar
{
public:
  void run();
};
/* 实际工厂 */
class CheryFactory : public CarFactory
{
public:
  ICar *createCar();
};

class BmwFactory : public CarFactory
{
public:
  ICar *createCar();
};


#endif

#ifndef __I_PRODUCT_HH__
#define __I_PRODUCT_HH__
#include <string>

class ICar
{
public:
  virtual void run() = 0;
protected:
  std::string msg;
};

class ISUV
{
public:
  virtual void run() = 0;
protected:
  std::string msg;
};

class CherySUV : public ISUV
{
public:
  CherySUV() { msg = "CherySUV";}
  virtual void run();
};

class CheryCar : public ICar
{
public:
  CheryCar() { msg = "CheryCar"; }
  virtual void run();
};

class BMWSUV : public ISUV
{
public:
  BMWSUV() { msg = "BMWSUV";}
  virtual void run();
};

class BMWCar : public ICar
{
public:
  BMWCar() { msg = "BMWCar"; }
  virtual void run();
};




#endif

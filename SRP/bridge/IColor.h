#ifndef __I_COLOR_HH_HH
#define __I_COLOR_HH_HH
#include <string>
using namespace std;

class IColor
{
public:
  virtual void descript(string &msg) = 0;
};

class Red : public IColor
{
public:
  void descript(string &msg);
};

class Green : public IColor
{
public:
  void descript(string &msg);
};


#endif

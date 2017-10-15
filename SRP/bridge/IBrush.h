#ifndef __I_BRUSH_HH__
#define __I_BRUSH_HH__
#include <string>
using namespace std;

#include "IColor.h"
class IBrush
{
public:
  virtual void draw() = 0;
  void setColor(IColor *mColor);
  IColor *getColor();
protected:
  IColor *mColor;
};


class BigBrush : public IBrush
{
public:
  BigBrush() { msg = "Using BigBrush"; }
  void draw();
  virtual ~BigBrush();
private:
  string msg;
};

class SmallBrush : public IBrush
{
public:
  SmallBrush() { msg = "Using SmallBrush"; }
  void draw();
  virtual ~SmallBrush();
private:
  string msg;
};



#endif

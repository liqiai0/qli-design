#ifndef _WEATHER_HH__
#define _WEATHER_HH__

#include <list>

#include "IObserver.h"

class Earth : public ISubject
{
public:
  Earth();
  void addObserser(IObserver *mObserser);
  void delObServer(IObserver *mObserser);
  void notifyAll();
  virtual ~Earth();
private:
  list<IObserver *> mList;
};

class Satellite : public IObserver
{
public:
  void update(string &msg);
};

class Radio : public IObserver
{
public:
  void update(string &msg);
};

#endif

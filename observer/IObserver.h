#ifndef __I_OBSERVER_HH__
#define __I_OBSERVER_HH__
#include <string>
using namespace std;

/* 观察者接口 */
class IObserver
{
public:
  virtual void update(string &msg) = 0;
};

/* 被观察者 */
class ISubject
{
public:
  virtual void addObserser(IObserver *mObserser) = 0;
  virtual void delObServer(IObserver *mObserser) = 0;
  virtual void notifyAll() = 0;
};

#endif

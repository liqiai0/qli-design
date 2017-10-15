#ifndef __MANAGER_HH__
#define __MANAGER_HH__
#include "IDecorator.h"

class Manager : public Project
{
public:
  Manager(Project *mProject);
  virtual void doCoding();
  virtual void doEarlyWork();
  virtual void doEndWork();
  void startNewWork();
protected:
  Project *mProject;
};

class ManagerA : public Manager
{
public:
  ManagerA(Project *mProject) : Manager(mProject){};
  void doEarlyWork();
  void doEndWork();
};

class ManagerB : public Manager
{
public:
  ManagerB(Project *mProject) : Manager(mProject){};
  void doEarlyWork();
  void doEndWork();
};


#endif

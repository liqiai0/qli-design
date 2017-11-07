#ifndef __SINGLETON_HH__
#define __SINGLETON_HH__
#include <iostream>

using namespace std;

class LazySingle
{
public:
  static LazySingle *getInstance();
  void setData(int data);
  int getData(void);
  virtual ~LazySingle();
private:
  LazySingle(){
      cout<<"create LazySingle instance"<<endl;
  };
  static LazySingle *instance;
  int data;
};

class HungerSingleton
{
public:
  static HungerSingleton* getInstance();
  void setData(int data);
  int getData(void);
  virtual ~HungerSingleton(){}
private:
  HungerSingleton(){
      cout<<"create HungerSingleton instance"<<endl;
  }
  static HungerSingleton * instance;
  int data;
};

#endif

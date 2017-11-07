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
      cout<<"create instace"<<endl;
  };
  static LazySingle *instance;
  int data;
};



#endif

#ifndef __COOK__HH__
#define __COOK__HH__
/**
 * @file Cook.h
 * @brief 我们做菜可以分为三个步骤 (1)洗菜（2）备料 （3）具体做菜 （4）盛菜端给客人享用，这三部就是算法的骨架 ；然而做不同菜需要的料，做的方法，以及如何盛装给客人享用都是不同的这个就是不同的实现细节。
 * @author qli, 823248601@qq.com
 * @version 1
 * @date 2017-10-08
 */

class Cook {
public:
  void doDishes();
  virtual bool preparForDish() = 0;
  virtual bool cook() = 0;
  virtual ~Cook(){};
private:
  bool washDishes();
  void toGuest();
};

class DoFish : public Cook {
public:
  bool preparForDish();
  bool cook();
  ~DoFish();
};

class DoBeef : public Cook {
public:
  bool preparForDish();
  bool cook();
  ~DoBeef();
};

#endif

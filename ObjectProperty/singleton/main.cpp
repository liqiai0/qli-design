#include <iostream>
#include <stdio.h>
#include "Singleton.h"

int main()
{

    LazySingle *mLay = LazySingle::getInstance();
    std::cout<<"mLay data="<<mLay->getData()<<std::endl;
    mLay->setData(12);
    std::cout<<"mLay data="<<mLay->getData()<<std::endl;

    LazySingle *mLay2 = LazySingle::getInstance();
    std::cout<<"mLay2 data="<<mLay2->getData()<<std::endl;
    return 0;
}


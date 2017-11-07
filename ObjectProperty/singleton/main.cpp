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


    HungerSingleton* mHung = HungerSingleton::getInstance();
    mHung->setData(15);
    std::cout<<"mHung data="<<mHung->getData()<<std::endl;

    HungerSingleton* mHung2 = HungerSingleton::getInstance();
    std::cout<<"mHung2 data="<<mHung2->getData()<<std::endl;

    return 0;
}



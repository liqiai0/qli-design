#include <iostream>
#include <stdio.h>
#include "ConcreteStrategy.h"

int main(int argc, char *argv[])
{

    Context *mContext = new Context();
    Vegetable *mVegetable = new Vegetable();
    Fish *mFish = new Fish();

    mContext->setStrategy(mFish);
    mContext->doDishes();

    mContext->setStrategy(mVegetable);
    mContext->doDishes();


    return 0;
}



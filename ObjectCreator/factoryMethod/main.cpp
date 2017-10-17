#include <stdio.h>
#include "IFactory.h"

int main(int argc, char *argv[])
{

    CarFactory* mCheryF = new CheryFactory();
    CarFactory* mBmwF = new BmwFactory();

    ICar *mC = mCheryF->createCar();
    mC->run();
    
    ICar *mB = mBmwF->createCar();
    mB->run();

    return 0;
}



#include <stdio.h>
#include "IFactory.h"

void Chery::run()
{
    printf("Chery run\n");
}

void Bmw::run()
{
    printf("BMW run\n");
}

ICar *CheryFactory::createCar()
{
    return new Chery();
}


ICar *BmwFactory::createCar()
{
    return new Bmw();
}




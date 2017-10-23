#include <stdio.h>
#include "IProduct.h"

void CheryCar::run()
{
    printf("I am %s, from Chery\n", this->msg.c_str());
}

void BMWCar::run()
{
    printf("I am %s, from BMW\n", this->msg.c_str());
}

void CherySUV::run()
{
    printf("I am %s, from Chery\n", this->msg.c_str());
}

void BMWSUV::run()
{
    printf("I am %s, from BMW\n", this->msg.c_str());
}


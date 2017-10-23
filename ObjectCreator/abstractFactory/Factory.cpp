#include "IFactory.h"

ISUV *CheryFactory::createSUV()
{
    return new CherySUV();
}

ISUV *BMWFactory::createSUV()
{
    return new BMWSUV();
}

ICar *CheryFactory::createCar()
{
    return new CheryCar();
}


ICar *BMWFactory::createCar()
{
    return new BMWCar();
}


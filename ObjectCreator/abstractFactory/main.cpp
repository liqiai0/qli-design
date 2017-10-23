#include <stdio.h>
#include "IProduct.h"
#include "IFactory.h"

int main(int argc, char *argv[])
{
    
    IFacroty *cheryFactory = new CheryFactory();
    IFacroty *bmwFactory = new BMWFactory();

    ICar *cCar = cheryFactory->createCar();
    cCar->run();
    ISUV *cSuv = cheryFactory->createSUV();
    cSuv->run();
    
    printf("=========================\n");

    ICar *bCar = bmwFactory->createCar();
    bCar->run();
    ISUV *bSUV = bmwFactory->createSUV();
    bSUV->run();

    return 0;
}



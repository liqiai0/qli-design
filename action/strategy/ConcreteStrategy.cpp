#include <stdio.h>
#include "ConcreteStrategy.h"

void Fish::doDishes()
{
    printf("cooking fish\n");
}

void Vegetable::doDishes()
{
    printf("cooking Vegetable\n");
}

void Context::setStrategy(IStrategy *mStrategy)
{
    this->mStrategy = mStrategy;
}

void Context::doDishes()
{
    if(mStrategy != NULL)
        mStrategy->doDishes();
}


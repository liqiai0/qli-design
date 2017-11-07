#include "Singleton.h"

LazySingle* LazySingle::instance = NULL;

LazySingle::~LazySingle(){};
LazySingle * LazySingle::getInstance()
{
    if(instance == NULL) {
        instance = new LazySingle();
    }
    return instance;
}

void LazySingle::setData(int data)
{
    this->data = data;
}

int LazySingle::getData(void)
{
    return this->data;
}


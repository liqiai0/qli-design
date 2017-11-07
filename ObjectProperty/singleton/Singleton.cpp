#include "Singleton.h"

LazySingle* LazySingle::instance = NULL;
HungerSingleton* HungerSingleton::instance = new HungerSingleton();

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

void HungerSingleton::setData(int data)
{
    this->data = data;
}

int HungerSingleton::getData()
{
    return this->data;
}

HungerSingleton* HungerSingleton::getInstance()
{
    if(instance == NULL) {
        instance = new HungerSingleton();
    }
    return instance;
}



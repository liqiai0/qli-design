#include "Singleton.h"
#include <pthread.h>

LazySingle* LazySingle::instance = NULL;
HungerSingleton* HungerSingleton::instance = new HungerSingleton();
LazySingleThread* LazySingleThread::instance = NULL;
pthread_mutex_t LazySingleThread::mutex;

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

LazySingleThread::LazySingleThread()
{
    cout<<"Create LazySingleThread instance"<<endl;
    pthread_mutex_init(&mutex, NULL);
}

LazySingleThread::~LazySingleThread()
{
    pthread_mutex_destroy(&mutex);
}

LazySingleThread* LazySingleThread::getInstance()
{
    if(instance == NULL) {
        pthread_mutex_lock(&mutex);
        instance = new LazySingleThread();
        pthread_mutex_unlock(&mutex);
    }
    return instance;
}

void LazySingleThread::setData(int data)
{
    this->data = data;
}

int LazySingleThread::getData()
{
    return this->data;
}

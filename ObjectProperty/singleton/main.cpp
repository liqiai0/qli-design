#include <iostream>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#include "Singleton.h"

void* thread_run1(void *args)
{
    while(1) {
        LazySingleThread *mt = LazySingleThread::getInstance();
    }    
}

void* thread_run2(void *args)
{
    while(1) {
        LazySingleThread *mt = LazySingleThread::getInstance();
    }  
}


int main()
{

    LazySingle *mLay = LazySingle::getInstance();
    std::cout<<"mLay data="<<mLay->getData()<<std::endl;
    mLay->setData(12);
    std::cout<<"mLay data="<<mLay->getData()<<std::endl;

    LazySingle *mLay2 = LazySingle::getInstance();
    std::cout<<"mLay2 data="<<mLay2->getData()<<std::endl;


    HungerSingleton* mHung = HungerSingleton::getInstance();
    mHung->setData(15);
    std::cout<<"mHung data="<<mHung->getData()<<std::endl;

    HungerSingleton* mHung2 = HungerSingleton::getInstance();
    std::cout<<"mHung2 data="<<mHung2->getData()<<std::endl;

    LazySingleThread* lSThread = LazySingleThread::getInstance();
    lSThread->setData(20);
    std::cout<<"lSThread data="<<lSThread->getData()<<std::endl;

    int ret = 0;

    pthread_t pid[2] = {0};

    ret = pthread_create(&pid[0], NULL, thread_run1, NULL);
    if(ret < 0) {
        std::cout<<"thread_run1 create err\n";
        return -1;
    }

    ret = pthread_create(&pid[1], NULL, thread_run2, NULL);
    if(ret < 0) {
        std::cout<<"thread_run2 create err\n";
        return -1;
    }
   
    sleep(2);

    return 0;
}



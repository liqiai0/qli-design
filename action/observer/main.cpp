#include <iostream>
#include <stdio.h>

#include "IObserver.h"
#include "Weather.h"

int main(int argc, char *argv[])
{
    ISubject *mEar = new Earth();

    IObserver *mSata = new Satellite();
    mEar->addObserser(mSata);

    IObserver *mRadio = new Radio();
    mEar->addObserser(mRadio);

    mEar->notifyAll();
    return 0;
}



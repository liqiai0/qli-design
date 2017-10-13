#include <stdio.h>

#include "Weather.h"
#include "IObserver.h"


Earth::Earth()
{
}

void Earth::addObserser(IObserver *mObserser)
{
    if(mObserser != NULL) {
        mList.push_front(mObserser);
    }
}

void Earth::delObServer(IObserver *mObserser)
{
    if(mObserser != NULL) {
        mList.remove(mObserser);
    }
}

Earth::~Earth()
{
}

void Satellite::update(string &msg)
{
    printf("Satellite weather: %s\n", msg.c_str());
}

void Earth::notifyAll()
{
    list<IObserver *>::iterator iter;
    iter = mList.begin();

    while(iter != mList.end())
    {
        string msg("change");
        (*iter)->update(msg);
        iter++;
    }

}

void Radio::update(string &msg)
{
    printf("Radio weather: %s\n", msg.c_str());
}


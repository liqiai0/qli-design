#include "IBrush.h"
#include "IColor.h"
#include <string.h>

void IBrush::setColor(IColor *mColor)
{
    this->mColor = mColor;
}

IColor *IBrush::getColor()
{
    return mColor;
}

void BigBrush::draw()
{
    if(this->mColor)
        mColor->descript(msg);

}

BigBrush::~BigBrush()
{}



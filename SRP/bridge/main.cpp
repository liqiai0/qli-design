#include <iostream>
#include <stdio.h>
#include "IBrush.h"
#include "IColor.h"

int main(int argc, char *argv[])
{

    IColor *red = new Red();
    IBrush *brush = new BigBrush();

    brush->setColor(red);
    brush->draw();

    IColor *green = new Green();
    brush->setColor(green);
    brush->draw();

    return 0;
}



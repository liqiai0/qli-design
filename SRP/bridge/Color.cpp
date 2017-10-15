#include <stdio.h>
#include <string.h>
#include "IColor.h"


void Red::descript(string &msg)
{
    printf("%s, color is red\n", msg.c_str());
}


void Green::descript(string &msg)
{
    printf("%s, color is green\n", msg.c_str());
}


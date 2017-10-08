#include <stdio.h>
#include "Cook.h"

void Cook::toGuest()
{
    printf("to guest\n");
}

void Cook::doDishes()
{
    bool flag = false;
    flag = washDishes();
    if (!flag) {
        printf("the original material of food is not wahsing\n");
        return;
    }

    flag = preparForDish();
    if (!flag) {
        printf("please prepare for food\n");
        return;
    }

    flag = cook();
    if (!flag) {
        printf("cook is not good\n");
        return;
    }
    toGuest();
}

bool Cook::washDishes()
{
    printf("wash dishes\n");
    return true;
}

bool DoFish::preparForDish()
{
    printf("prepare for fish\n");
    return true;
}

bool DoFish::cook()
{
    printf("cooking fish\n");
    return true;
}

DoFish::~DoFish()
{
    printf("delete DoFish\n");
}

bool DoBeef::preparForDish()
{
    printf("prepare for beef\n");
    return true;
}

bool DoBeef::cook()
{
    printf("cooking beef\n");
    return true;
}

DoBeef::~DoBeef()
{
    printf("delete doBeef\n");
}


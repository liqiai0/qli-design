#include <stdio.h>
#include "Employe.h"
#include "Manager.h"

int main(int argc, char *argv[])
{

    Project *mE = new Employe();

    Manager *mA = new ManagerA(mE);

    mA->doCoding();
    printf("========================================\n");

    Manager *mB = new ManagerB(mE);
    mB->doCoding();

    return 0;
}

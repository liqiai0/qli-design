#include <stdio.h>
#include "Manager.h"


void Manager::startNewWork()
{
    doEarlyWork();
    mProject->doCoding();
    doEndWork();
}

void Manager::doCoding()
{
    startNewWork();
}


void Manager::doEarlyWork()
{
    printf("Unkown Manager do early work\n");
}

void Manager::doEndWork()
{
    printf("Unkown Manager do end work\n");
}

Manager::Manager(Project *mProject)
{
    this->mProject = mProject;
}

void ManagerA::doEarlyWork()
{
    printf("ManagerA do early work\n");
}

void ManagerA::doEndWork()
{
    printf("ManagerB do end work\n");
}

void ManagerB::doEndWork()
{
    printf("ManagerB do end work\n");
}

void ManagerB::doEarlyWork()
{
    printf("ManagerB do early work\n");
}



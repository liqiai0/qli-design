#include <iostream>
#include "Cook.h"
using namespace std;

int main()
{
    Cook *doFish = new DoFish();
    doFish->doDishes();
    cout<<"==============================="<<endl; 
    Cook *doBeef = new DoBeef();
    doBeef->doDishes();
    
    return 0;
}



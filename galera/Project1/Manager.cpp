#include"Manager.h"
#include<iostream>

using namespace std;

void Manager::setSubordinatesCount(int count)
{
    _subordinatesCount = count;
}

int Manager::getSubordinatesCount()
{
    return _subordinatesCount;
}

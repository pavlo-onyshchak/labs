#include"Manager.h"
#include<iostream>

using namespace std;

void Manager::setSubordinatesCount(int n_count)
{
	subordinatesCount = n_count;
}

int Manager::getSubordinatesCount()
{
	return subordinatesCount;
}

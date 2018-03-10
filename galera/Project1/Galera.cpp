#include"Galera.h"
#include<iostream>

using namespace std;

void Galera::setName (string name)
{
	_name = name;
}

string Galera::getName()
{
	return _name;
}

void Galera::setCountOfemploye(int count)
{
	_countOfemploye = count;
}

int Galera::getCountOfemploye()
{
	return _countOfemploye;
}

void Galera::setTotalSallary(int total)
{
	_totalSallary = total;
}

int Galera::getTotalSallary()
{
	return _totalSallary;
}

#include"Galera.h"
#include<iostream>

using namespace std;

void Galera::setName (string n_name)
{
	name = n_name;
}

string Galera::getName()
{
	return name;
}

void Galera::setCountOfemploye(int count)
{
	countOfemploye = count;
}

int Galera::getCountOfemploye()
{
	return countOfemploye;
}

void Galera::setTotalSallary(int total)
{
	totalSallary = total;
}

int Galera::getTotalSallary()
{
	return totalSallary;
}

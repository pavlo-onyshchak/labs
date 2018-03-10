#include"Galera.h"
#include<iostream>

using namespace std;

void Galera::setName(string name)
{
    _name = name;
}

string Galera::getName() const
{
    return _name;
}

void Galera::setEmployeeCount(int count)
{
    _EmployeeCount = count;
}

int Galera::getEmployeeCount() const
{
    return _EmployeeCount;
}

void Galera::setTotalSallary(int total)
{
    _totalSallary = total;
}

int Galera::getTotalSallary() const
{
    return _totalSallary;
}

#include"Employee.h"
#include<iostream>	
#include<string>

using namespace std;

void Employee::setName(string name)
{
    _name = name;
}

string Employee::getName() const
{
    return _name;
}

void Employee::setSurname(string surname)
{
    _surname = surname;
}

string Employee::getSurname() const
{
    return _surname;
}

void Employee::setSallary(int sallary)
{
    _sallary = sallary;
}

int Employee::getSallary() const
{
    return _sallary;
}

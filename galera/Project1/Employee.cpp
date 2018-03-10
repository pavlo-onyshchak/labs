#include"Employee.h"
#include<iostream>	
#include<string>

using namespace std;

void Employee::setName(string name)
{
    _name = name;
}

string Employee::getName()
{
    return _name;
}

void Employee::setSurname(string surname)
{
    _surname = surname;
}

string Employee::getSurname()
{
    return _surname;
}

void Employee::setSallary(int sallary)
{
    _sallary = sallary;
}

int Employee::getSallary()
{
    return _sallary;
}

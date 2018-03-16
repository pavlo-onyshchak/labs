#include"Employee.h"
#include<iostream>	
#include<string>

using namespace std;



string Employee::getName() const
{
    return _name;
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

bool Employee::operator==(const Employee& first)
{
    return first._name == _name && first._sallary == _sallary && first._surname == _surname;
}

std::ostream & operator<<(ostream & output, const Employee & object)
{
    output << object.getName() << " " << object.getSurname() << " " << object.getSallary() << endl;
    return output;
}


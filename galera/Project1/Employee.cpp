#include"Employee.h"
#include<iostream>	
#include<string>

using namespace std;

void Employee::setName(string s_name)
{
	name = s_name;
}

string Employee::getName()
{
	return name;
}

void Employee::setSurname (string s_surname)
{
	surname = s_surname;
}

string Employee::getSurname()
{
	return surname;
}

void Employee::setSallary(int n_sallary)
{
	sallary = n_sallary;
}

int Employee::getSallary()
{
	return sallary;
}



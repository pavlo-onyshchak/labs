#include"employe.h"
#include<iostream>	
#include<string>

using namespace std;

void employee::setName(string s_name)
{
	name = s_name;
}

string employee::getName()
{
	return name;
}

void employee::setSurname (string s_surname)
{
	surname = s_surname;
}

string employee::getSurname()
{
	return surname;
}

void employee::setSallary(int n_sallary)
{
	sallary = n_sallary;
}

int employee::getSallary()
{
	return sallary;
}



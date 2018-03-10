#include"galera.h"
#include<iostream>

using namespace std;

void galera::setName (string n_name)
{
	name = n_name;
}

string galera::getName()
{
	return name;
}

void galera::setCount_of_employe(int count)
{
	count_of_employe = count;
}

int galera::getCount_of_employe()
{
	return count_of_employe;
}

void galera::setTotal_sallary(int total)
{
	total_sallary = total;
}

int galera::getTotal_sallary()
{
	return total_sallary;
}

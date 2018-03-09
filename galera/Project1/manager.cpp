#include"manager.h"
#include<iostream>

using namespace std;

void manager::setCount_of_depender_employee(int n_count)
{
	count_of_depender_employe = n_count;
}

int manager::getCount_of_depender_employe()
{
	return count_of_depender_employe;
}
